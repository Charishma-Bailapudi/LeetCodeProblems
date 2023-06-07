class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        vector<string> v;
        string t = "";
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (!t.empty())
                {
                    v.push_back(t);
                    t = "";
                }
            }
            else
            {
                t.push_back(s[i]);
            }
        }
        
        if (!t.empty())
        {
            v.push_back(t);
        }
        
        int n = v.size();
        if (n > 0)
        {
            string ans = v[n - 1];
            return ans.size();
        }
        
        return 0;
    }
};
