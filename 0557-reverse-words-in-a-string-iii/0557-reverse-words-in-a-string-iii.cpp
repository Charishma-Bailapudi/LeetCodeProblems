class Solution {
public:
    string reverseWords(string s) 
    {
        string s1="";
        vector<string>ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                ans.push_back(s1);
                s1="";
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        
        ans.push_back(s1); 
        
        string a="";
        for(int i=0;i<ans.size();i++)
        {
            string z=ans[i];
            reverse(z.begin(),z.end());
            a+=z;
            
            if(i<ans.size()-1)
             a += ' ';
            
        }
        return a;
    }
};