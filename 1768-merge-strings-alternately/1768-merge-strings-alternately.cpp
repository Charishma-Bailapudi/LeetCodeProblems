class Solution {
public:
    string merging(string word1, string word2, string &newstring, int i, int j) {
        if (i < word1.length() && j < word2.length()) 
        {
            newstring.push_back(word1[i]);
            newstring.push_back(word2[j]);
            return merging(word1, word2, newstring, i+1, j+1);
        }
        if (i == word1.length())
        {
            newstring.append(word2.substr(j));
        }
        else if (j == word2.length())
        {
            newstring.append(word1.substr(i));
        }
        return newstring;
    }
public:
    string mergeAlternately(string word1, string word2) {
        string newstring = "";
        int i = 0, j = 0;
        return merging(word1, word2, newstring, i, j);
    }
};


// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int m = word1.size();
//         int n = word2.size();
//         string result = "";
//         int i = 0, j = 0;

//         while (i < m || j < n) {
//             if (i < m) {
//                 result.push_back(word1[i++]);
//             }
//             if (j < n) {
//                 result.push_back(word2[j++]);
//             }
//         }

//         return result;
//     }
// };
