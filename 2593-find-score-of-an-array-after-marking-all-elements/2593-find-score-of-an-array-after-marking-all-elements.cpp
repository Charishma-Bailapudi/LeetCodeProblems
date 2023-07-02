class Solution {
public:
    long long findScore(vector<int>& nums)
    {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
            p.push({nums[i],i});
        }
        long long score=0;
        while(!p.empty())
        {
            long long x=p.top().second;
            if(v[x]==0)
            {
                score+=p.top().first;
                v[x]=1;
                if(x+1<n)
                   v[x+1]=1;
                if(x-1>=0)
                   v[x-1]=1;
                p.pop();
            }
            else
             p.pop();   
        }
        return score;
    }
};