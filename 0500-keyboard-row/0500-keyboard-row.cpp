class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        
        map<char,int>mp;
        vector<string>ans;
        vector<string>s={"qwertyuiop","asdfghjkl","zxcvbnm"};
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s[i].size();j++)
            {
                mp[s[i][j]]=i;
            }
        }
        
        for(int i=0;i<words.size();i++)
        {
            int temp=mp[tolower(words[i][0])];
            int flag=0;
            for(int j=1;j<words[i].size();j++)
            {
                if(temp!=mp[tolower(words[i][j])])
                {
                    flag=1;
                    break;
                }
     
            }
            if(flag==0)
            {
                ans.push_back(words[i]);
            }
        }
       
        return ans;
        
    }
};