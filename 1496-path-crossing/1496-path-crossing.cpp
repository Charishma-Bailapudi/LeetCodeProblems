class Solution {
public:
    bool isPathCrossing(string path) 
    {
        vector<pair<int,int>>visi;
        int x=0,y=0;
        visi.push_back({x,y});
        for(auto it:path)
        {
            if(it=='N')y++;
            else if(it=='S')y--;
            else if(it=='E')x++;
            else if(it=='W')x--;            
            visi.push_back({x,y});
        }
        set<pair<int,int>>st(visi.begin(),visi.end());
        if(visi.size()==st.size())return false;
        else return true;
    }
};