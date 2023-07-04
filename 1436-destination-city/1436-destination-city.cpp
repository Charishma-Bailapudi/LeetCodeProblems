class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_set<string>mp;
        for(auto &x:paths)
        {
            mp.insert(x[0]);
        }
        
        for(auto &y:paths)
        {
            if(mp.find(y[1])==mp.end())
                return y[1];
        }
        return {};
    }
};