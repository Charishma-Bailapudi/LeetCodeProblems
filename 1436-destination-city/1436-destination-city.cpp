class Solution {
public:
    string destCity(vector<vector<string>>& paths)
    {
        set<string>ans;
      
        for (int i = 0; i < paths.size(); i++) 
         {
            ans.insert(paths[i][0]);
         }
        
         for (int i = 0; i < paths.size(); i++) 
          {
             string com=paths[i][1];
             
             if(ans.find(com) == ans.end())
             {
                 return com;
             }
          }
        
        return "";
    }
};