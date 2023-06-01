class Solution {
public:
    string decodeString(string s)
    {
    int i = 0; // Index to keep track of the current position in the string

    return decodeHelper(s, i);
    }

    string decodeHelper(const string& s, int& i) 
    {
        string result;

        while (i < s.length() && s[i] != ']') {
            if (isdigit(s[i])) {
                int num = 0;

                // Extract the complete number
                while (i < s.length() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // Skip the opening bracket '['
                string decodedStr = decodeHelper(s, i); // Decode the substring inside the brackets

                // Repeat the decoded substring 'num' times
                for (int j = 0; j < num; j++) {
                    result += decodedStr;
                }

                i++; // Skip the closing bracket ']'
            }
            else {
                result += s[i];
                i++;
            }
        }

    return result;
}

};