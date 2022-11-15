#region

using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

#endregion

#if UNITY_EDITOR
#endif

namespace OBJImport
{
    public enum SplitMode
    {
        None,
        Object,
        Material
    }

    public class OBJLoader
    {
        private FileInfo _objInfo;
        private readonly SplitMode SplitMode = SplitMode.Object;

        internal Dictionary<string, Material> Materials;
        internal List<Vector3> Normals = new();
        internal List<Vector2> UVs = new();
        internal List<Vector3> Vertices = new();

        public GameObject Load(Stream input)
        {
            var reader = new StreamReader(input);
            
            var builderDict = new Dictionary<string, OBJObjectBuilder>();
            OBJObjectBuilder currentBuilder = null;
            var currentMaterial = "default";

            //lists for face data
            //prevents excess GC
            var vertexIndices = new List<int>();
            var normalIndices = new List<int>();
            var uvIndices = new List<int>();

            //helper func
            Action<string> setCurrentObjectFunc = objectName =>
            {
                if (!builderDict.TryGetValue(objectName, out currentBuilder))
                {
                    currentBuilder = new OBJObjectBuilder(objectName, this);
                    builderDict[objectName] = currentBuilder;
                }
            };

            //create default object
            setCurrentObjectFunc.Invoke("default");

            //var buffer = new DoubleBuffer(reader, 256 * 1024);
            var buffer = new CharWordReader(reader, 4 * 1024);

            //do the reading
            while (true)
            {
                buffer.SkipWhitespaces();

                if (buffer.endReached) break;

                buffer.ReadUntilWhiteSpace();

                //comment or blank
                if (buffer.Is("#"))
                {
                    buffer.SkipUntilNewLine();
                    continue;
                }

                if (Materials == null && buffer.Is("mtllib"))
                {
                    buffer.SkipWhitespaces();
                    buffer.ReadUntilNewLine();
                    continue;
                }

                if (buffer.Is("v"))
                {
                    Vertices.Add(buffer.ReadVector());
                    continue;
                }

                //normal
                if (buffer.Is("vn"))
                {
                    Normals.Add(buffer.ReadVector());
                    continue;
                }

                //uv
                if (buffer.Is("vt"))
                {
                    UVs.Add(buffer.ReadVector());
                    continue;
                }

                //new material
                if (buffer.Is("usemtl"))
                {
                    buffer.SkipWhitespaces();
                    buffer.ReadUntilNewLine();
                    var materialName = buffer.GetString();
                    currentMaterial = materialName;

                    if (SplitMode == SplitMode.Material) setCurrentObjectFunc.Invoke(materialName);

                    continue;
                }

                //new object
                if ((buffer.Is("o") || buffer.Is("g")) && SplitMode == SplitMode.Object)
                {
                    buffer.ReadUntilNewLine();
                    var objectName = buffer.GetString(1);
                    setCurrentObjectFunc.Invoke(objectName);
                    continue;
                }

                //face data (the fun part)
                if (buffer.Is("f"))
                {
                    //loop through indices
                    while (true)
                    {
                        bool newLinePassed;
                        buffer.SkipWhitespaces(out newLinePassed);
                        if (newLinePassed) break;

                        var vertexIndex = int.MinValue;
                        var normalIndex = int.MinValue;
                        var uvIndex = int.MinValue;

                        vertexIndex = buffer.ReadInt();
                        if (buffer.currentChar == '/')
                        {
                            buffer.MoveNext();
                            if (buffer.currentChar != '/') uvIndex = buffer.ReadInt();

                            if (buffer.currentChar == '/')
                            {
                                buffer.MoveNext();
                                normalIndex = buffer.ReadInt();
                            }
                        }

                        //"postprocess" indices
                        if (vertexIndex > int.MinValue)
                        {
                            if (vertexIndex < 0)
                                vertexIndex = Vertices.Count - vertexIndex;
                            vertexIndex--;
                        }

                        if (normalIndex > int.MinValue)
                        {
                            if (normalIndex < 0)
                                normalIndex = Normals.Count - normalIndex;
                            normalIndex--;
                        }

                        if (uvIndex > int.MinValue)
                        {
                            if (uvIndex < 0)
                                uvIndex = UVs.Count - uvIndex;
                            uvIndex--;
                        }

                        //set array values
                        vertexIndices.Add(vertexIndex);
                        normalIndices.Add(normalIndex);
                        uvIndices.Add(uvIndex);
                    }

                    //push to builder
                    currentBuilder.PushFace(currentMaterial, vertexIndices, normalIndices, uvIndices);

                    //clear lists
                    vertexIndices.Clear();
                    normalIndices.Clear();
                    uvIndices.Clear();

                    continue;
                }

                buffer.SkipUntilNewLine();
            }

            //finally, put it all together
            var obj =
                new GameObject(_objInfo != null ? Path.GetFileNameWithoutExtension(_objInfo.Name) : "WavefrontObject");
            obj.transform.localScale = new Vector3(-1f, 1f, 1f);
            obj.SetActive(false);

            foreach (var builder in builderDict)
            {
                //empty object
                if (builder.Value.PushedFaceCount == 0)
                    continue;

                var builtObj = builder.Value.Build();
                builtObj.transform.SetParent(obj.transform, false);
            }

            return obj;
        }

        public GameObject Load(Stream input, Stream mtlInput)
        {
            var mtlLoader = new MTLLoader();
            Materials = mtlLoader.Load(mtlInput);

            return Load(input);
        }
    }
}