class Solution {
public:
    string frequencySort(string s)
    {
        priority_queue<pair<int, char>> d;
        unordered_map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto y:mp)
        {
            d.push({y.second,y.first});
        }
        string t;
        while(!d.empty())
        {
            int count=d.top().first;
            char ch=d.top().second;
            for(int i=0;i<count;i++)
            {
               t.push_back(ch);
            }
            
            d.pop();
        }
        return t;
    }
};