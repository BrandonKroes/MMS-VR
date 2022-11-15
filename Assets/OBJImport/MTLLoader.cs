#region

using System.Collections.Generic;
using System.IO;
using OBJImport;
using UnityEngine;

#endregion

public class MTLLoader
{
    public Dictionary<string, Material> Load(Stream input)
    {
        var inputReader = new StreamReader(input);
        var reader = new StringReader(inputReader.ReadToEnd());

        var mtlDict = new Dictionary<string, Material>();
        Material currentMaterial = null;

        for (var line = reader.ReadLine(); line != null; line = reader.ReadLine())
        {
            if (string.IsNullOrWhiteSpace(line))
                continue;

            var processedLine = line.Clean();
            var splitLine = processedLine.Split(' ');

            //blank or comment
            if (splitLine.Length < 2 || processedLine[0] == '#')
                continue;

            //newmtl
            if (splitLine[0] == "newmtl")
            {
                var materialName = processedLine.Substring(7);

                var newMtl = new Material(Shader.Find("Standard (Specular setup)")) { name = materialName };
                mtlDict[materialName] = newMtl;
                currentMaterial = newMtl;

                continue;
            }

            //anything past here requires a material instance
            if (currentMaterial == null)
                continue;

            //diffuse color
            if (splitLine[0] == "Kd" || splitLine[0] == "kd")
            {
                var currentColor = currentMaterial.GetColor("_Color");
                var kdColor = OBJLoaderHelper.ColorFromStrArray(splitLine);

                currentMaterial.SetColor("_Color", new Color(kdColor.r, kdColor.g, kdColor.b, currentColor.a));
                continue;
            }


            //specular color
            if (splitLine[0] == "Ks" || splitLine[0] == "ks")
            {
                currentMaterial.SetColor("_SpecColor", OBJLoaderHelper.ColorFromStrArray(splitLine));
                continue;
            }

            //emission color
            if (splitLine[0] == "Ka" || splitLine[0] == "ka")
            {
                currentMaterial.SetColor("_EmissionColor", OBJLoaderHelper.ColorFromStrArray(splitLine, 0.05f));
                currentMaterial.EnableKeyword("_EMISSION");
                continue;
            }


            //alpha
            if (splitLine[0] == "d" || splitLine[0] == "Tr")
            {
                var visibility = OBJLoaderHelper.FastFloatParse(splitLine[1]);

                //tr statement is just d inverted
                if (splitLine[0] == "Tr")
                    visibility = 1f - visibility;

                if (visibility < 1f - Mathf.Epsilon)
                {
                    var currentColor = currentMaterial.GetColor("_Color");

                    currentColor.a = visibility;
                    currentMaterial.SetColor("_Color", currentColor);

                    OBJLoaderHelper.EnableMaterialTransparency(currentMaterial);
                }

                continue;
            }

            //glossiness
            if (splitLine[0] == "Ns" || splitLine[0] == "ns")
            {
                var Ns = OBJLoaderHelper.FastFloatParse(splitLine[1]);
                Ns = Ns / 1000f;
                currentMaterial.SetFloat("_Glossiness", Ns);
            }
        }

        //return our dict
        return mtlDict;
    }
}