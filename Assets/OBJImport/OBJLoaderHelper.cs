#region

using System.Globalization;
using UnityEngine;
using UnityEngine.Rendering;

#endregion

namespace OBJImport
{
    public static class OBJLoaderHelper
    {
        public static void EnableMaterialTransparency(Material mtl)
        {
            mtl.SetFloat("_Mode", 3f);
            mtl.SetInt("_SrcBlend", (int)BlendMode.SrcAlpha);
            mtl.SetInt("_DstBlend", (int)BlendMode.OneMinusSrcAlpha);
            mtl.SetInt("_ZWrite", 0);
            mtl.DisableKeyword("_ALPHATEST_ON");
            mtl.EnableKeyword("_ALPHABLEND_ON");
            mtl.DisableKeyword("_ALPHAPREMULTIPLY_ON");
            mtl.renderQueue = 3000;
        }

        public static float FastFloatParse(string input)
        {
            if (input.Contains("e") || input.Contains("E"))
                return float.Parse(input, CultureInfo.InvariantCulture);

            float result = 0;
            var pos = 0;
            var len = input.Length;

            if (len == 0) return float.NaN;
            var c = input[0];
            float sign = 1;
            if (c == '-')
            {
                sign = -1;
                ++pos;
                if (pos >= len) return float.NaN;
            }

            while (true) // breaks inside on pos >= len or non-digit character
            {
                if (pos >= len) return sign * result;
                c = input[pos++];
                if (c < '0' || c > '9') break;
                result = result * 10.0f + (c - '0');
            }

            if (c != '.' && c != ',') return float.NaN;
            var exp = 0.1f;
            while (pos < len)
            {
                c = input[pos++];
                if (c < '0' || c > '9') return float.NaN;
                result += (c - '0') * exp;
                exp *= 0.1f;
            }

            return sign * result;
        }

        public static Material CreateNullMaterial()
        {
            return new Material(Shader.Find("Standard (Specular setup)"));
        }

        public static Color ColorFromStrArray(string[] cmps, float scalar = 1.0f)
        {
            var Kr = FastFloatParse(cmps[1]) * scalar;
            var Kg = FastFloatParse(cmps[2]) * scalar;
            var Kb = FastFloatParse(cmps[3]) * scalar;
            return new Color(Kr, Kg, Kb);
        }
    }
}