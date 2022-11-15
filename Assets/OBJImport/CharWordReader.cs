#region

using System.IO;
using UnityEngine;

#endregion

namespace OBJImport
{
    public class CharWordReader
    {
        private readonly char[] buffer;
        private readonly int bufferSize;

        private readonly StreamReader reader;

        public char currentChar;
        private int currentPosition;
        public bool endReached;
        private int maxPosition;
        public char[] word;
        public int wordSize;

        public CharWordReader(StreamReader reader, int bufferSize)
        {
            this.reader = reader;
            this.bufferSize = bufferSize;

            buffer = new char[this.bufferSize];
            word = new char[this.bufferSize];

            MoveNext();
        }

        public void SkipWhitespaces()
        {
            while (char.IsWhiteSpace(currentChar)) MoveNext();
        }

        public void SkipWhitespaces(out bool newLinePassed)
        {
            newLinePassed = false;
            while (char.IsWhiteSpace(currentChar))
            {
                if (currentChar == '\r' || currentChar == '\n') newLinePassed = true;
                MoveNext();
            }
        }

        public void SkipUntilNewLine()
        {
            while (currentChar != char.MinValue && currentChar != '\n' && currentChar != '\r') MoveNext();
            SkipNewLineSymbols();
        }

        public void ReadUntilWhiteSpace()
        {
            wordSize = 0;
            while (currentChar != char.MinValue && char.IsWhiteSpace(currentChar) == false)
            {
                word[wordSize] = currentChar;
                wordSize++;
                MoveNext();
            }
        }

        public void ReadUntilNewLine()
        {
            wordSize = 0;
            while (currentChar != char.MinValue && currentChar != '\n' && currentChar != '\r')
            {
                word[wordSize] = currentChar;
                wordSize++;
                MoveNext();
            }

            SkipNewLineSymbols();
        }

        public bool Is(string other)
        {
            if (other.Length != wordSize) return false;

            for (var i = 0; i < wordSize; i++)
                if (word[i] != other[i])
                    return false;

            return true;
        }

        public string GetString(int startIndex = 0)
        {
            if (startIndex >= wordSize - 1) return string.Empty;
            return new string(word, startIndex, wordSize - startIndex);
        }

        public Vector3 ReadVector()
        {
            SkipWhitespaces();
            var x = ReadFloat();
            SkipWhitespaces();
            var y = ReadFloat();
            SkipWhitespaces(out var newLinePassed);
            var z = 0f;
            if (newLinePassed == false) z = ReadFloat();
            return new Vector3(x, y, z);
        }

        public int ReadInt()
        {
            var result = 0;
            var isNegative = currentChar == '-';
            if (isNegative) MoveNext();

            while (currentChar >= '0' && currentChar <= '9')
            {
                var digit = currentChar - '0';
                result = result * 10 + digit;
                MoveNext();
            }

            return isNegative ? -result : result;
        }

        public float ReadFloat()
        {
            var isNegative = currentChar == '-';
            if (isNegative) MoveNext();

            var num = (float)ReadInt();
            if (currentChar == '.' || currentChar == ',')
            {
                MoveNext();
                num += ReadFloatEnd();

                if (currentChar == 'e' || currentChar == 'E')
                {
                    MoveNext();
                    var exp = ReadInt();
                    num = num * Mathf.Pow(10f, exp);
                }
            }

            if (isNegative) num = -num;

            return num;
        }

        private float ReadFloatEnd()
        {
            var result = 0f;

            var exp = 0.1f;
            while (currentChar >= '0' && currentChar <= '9')
            {
                var digit = currentChar - '0';
                result += digit * exp;

                exp *= 0.1f;

                MoveNext();
            }

            return result;
        }

        private void SkipNewLineSymbols()
        {
            while (currentChar == '\n' || currentChar == '\r') MoveNext();
        }

        public void MoveNext()
        {
            currentPosition++;
            if (currentPosition >= maxPosition)
            {
                if (reader.EndOfStream)
                {
                    currentChar = char.MinValue;
                    endReached = true;
                    return;
                }

                currentPosition = 0;
                maxPosition = reader.Read(buffer, 0, bufferSize);
            }

            currentChar = buffer[currentPosition];
        }
    }
}