class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int, pair<int, int>>> d;
        for (auto x : points)
        {
            int x1 = x[0];
            int y1 = x[1];
            int dis = x1 * x1 + y1 * y1;
            if (d.size() == k)
            {
                if(dis<d.top().first)
                {
                d.pop();
                d.push({dis, {x1, y1}});
                }
            }
            else
              d.push({dis, {x1, y1}}); 
        }
        vector<vector<int>> v;
        while (!d.empty())
        {
            auto it=d.top();
            v.push_back({it.second.first,it.second.second});
            d.pop();
        }
        return v;
    }
};
