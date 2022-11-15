#region

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

#endregion

namespace OBJImport
{
    public class OBJObjectBuilder
    {
        private readonly Dictionary<ObjLoopHash, int> _globalIndexRemap = new();

        //stuff passed in by ctor
        private readonly OBJLoader _loader;
        private readonly Dictionary<string, List<int>> _materialIndices = new();
        private readonly string _name;
        private readonly List<Vector3> _normals = new();
        private readonly List<Vector2> _uvs = new();

        //our local vert/normal/uv
        private readonly List<Vector3> _vertices = new();
        private List<int> _currentIndexList;
        private string _lastMaterial;

        //this will be set if the model has no normals or missing normal info
        private bool recalculateNormals;

        public OBJObjectBuilder(string name, OBJLoader loader)
        {
            _name = name;
            _loader = loader;
        }

        //
        public int PushedFaceCount { get; private set; }

        public GameObject Build()
        {
            var go = new GameObject(_name);

            //add meshrenderer
            var mr = go.AddComponent<MeshRenderer>();
            var submesh = 0;


            //locate the material for each submesh
            var materialArray = new Material[_materialIndices.Count];
            foreach (var kvp in _materialIndices)
            {
                Material material = null;
                if (_loader.Materials == null)
                {
                    material = OBJLoaderHelper.CreateNullMaterial();
                    material.name = kvp.Key;
                }
                else
                {
                    if (!_loader.Materials.TryGetValue(kvp.Key, out material))
                    {
                        material = OBJLoaderHelper.CreateNullMaterial();
                        material.name = kvp.Key;
                        _loader.Materials[kvp.Key] = material;
                    }
                }

                materialArray[submesh] = material;
                submesh++;
            }

            mr.sharedMaterials = materialArray;

            //add meshfilter
            var mf = go.AddComponent<MeshFilter>();
            submesh = 0;

            var msh = new Mesh
            {
                name = _name,
                indexFormat = _vertices.Count > 65535 ? IndexFormat.UInt32 : IndexFormat.UInt16,
                subMeshCount = _materialIndices.Count
            };

            //set vertex data
            msh.SetVertices(_vertices);
            msh.SetNormals(_normals);
            msh.SetUVs(0, _uvs);

            //set faces
            foreach (var kvp in _materialIndices)
            {
                msh.SetTriangles(kvp.Value, submesh);
                submesh++;
            }

            //recalculations
            if (recalculateNormals)
                msh.RecalculateNormals();
            msh.RecalculateTangents();
            msh.RecalculateBounds();

            mf.sharedMesh = msh;

            //
            return go;
        }

        public void SetMaterial(string name)
        {
            if (!_materialIndices.TryGetValue(name, out _currentIndexList))
            {
                _currentIndexList = new List<int>();
                _materialIndices[name] = _currentIndexList;
            }
        }


        public void PushFace(string material, List<int> vertexIndices, List<int> normalIndices, List<int> uvIndices)
        {
            //invalid face size?
            if (vertexIndices.Count < 3) return;

            //set material
            if (material != _lastMaterial)
            {
                SetMaterial(material);
                _lastMaterial = material;
            }

            //remap
            var indexRemap = new int[vertexIndices.Count];
            for (var i = 0; i < vertexIndices.Count; i++)
            {
                var vertexIndex = vertexIndices[i];
                var normalIndex = normalIndices[i];
                var uvIndex = uvIndices[i];

                var hashObj = new ObjLoopHash
                {
                    vertexIndex = vertexIndex,
                    normalIndex = normalIndex,
                    uvIndex = uvIndex
                };
                var remap = -1;

                if (!_globalIndexRemap.TryGetValue(hashObj, out remap))
                {
                    //add to dict
                    _globalIndexRemap.Add(hashObj, _vertices.Count);
                    remap = _vertices.Count;

                    //add new verts and what not
                    _vertices.Add(vertexIndex >= 0 && vertexIndex < _loader.Vertices.Count
                        ? _loader.Vertices[vertexIndex]
                        : Vector3.zero);
                    _normals.Add(normalIndex >= 0 && normalIndex < _loader.Normals.Count
                        ? _loader.Normals[normalIndex]
                        : Vector3.zero);
                    _uvs.Add(uvIndex >= 0 && uvIndex < _loader.UVs.Count ? _loader.UVs[uvIndex] : Vector2.zero);

                    //mark recalc flag
                    if (normalIndex < 0)
                        recalculateNormals = true;
                }

                indexRemap[i] = remap;
            }


            //add face to our mesh list
            if (indexRemap.Length == 3)
            {
                _currentIndexList.AddRange(new[] { indexRemap[0], indexRemap[1], indexRemap[2] });
            }
            else if (indexRemap.Length == 4)
            {
                _currentIndexList.AddRange(new[] { indexRemap[0], indexRemap[1], indexRemap[2] });
                _currentIndexList.AddRange(new[] { indexRemap[2], indexRemap[3], indexRemap[0] });
            }
            else if (indexRemap.Length > 4)
            {
                for (var i = indexRemap.Length - 1; i >= 2; i--)
                    _currentIndexList.AddRange(new[] { indexRemap[0], indexRemap[i - 1], indexRemap[i] });
            }

            PushedFaceCount++;
        }

        private class ObjLoopHash
        {
            public int normalIndex;
            public int uvIndex;
            public int vertexIndex;

            public override bool Equals(object obj)
            {
                if (!(obj is ObjLoopHash))
                    return false;

                var hash = obj as ObjLoopHash;
                return hash.vertexIndex == vertexIndex && hash.uvIndex == uvIndex && hash.normalIndex == normalIndex;
            }

            public override int GetHashCode()
            {
                var hc = 3;
                hc = unchecked(hc * 314159 + vertexIndex);
                hc = unchecked(hc * 314159 + normalIndex);
                hc = unchecked(hc * 314159 + uvIndex);
                return hc;
            }
        }
    }
}