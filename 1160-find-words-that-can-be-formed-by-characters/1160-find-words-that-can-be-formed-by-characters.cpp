class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
         int cnt[26] = {}, res = 0;
        
          for (auto ch:chars) 
          {
              cnt[ch-'a']++;
          }
         
        for(auto x:words)
        {
            int cnt1[26]={};
            
            for(auto ch:x)
            {
                cnt1[ch-'a']++;
            }
            
            int flag=1;
            
           for(auto ch:x)
           {
               if(cnt1[ch-'a']<=cnt[ch-'a'])
               {
                   int flag=1;
               }
               else
               {
                   flag=0;
                   break;
               }
           }
            
            if(flag)
            {
                res+=x.size();
                // cout<<"res is"<<res<<endl;
            }
        }
        return res;

    }
};