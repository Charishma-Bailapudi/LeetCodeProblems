class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int lossprofit[n];
        int tot=0;
        for(int i=0;i<n;i++)
        {
                tot+=costs[i][0];
                lossprofit[i]=costs[i][1]-costs[i][0];
        }
        sort(lossprofit,lossprofit+n);
        for(int i=0;i<n/2;i++)
        {
            tot+=lossprofit[i];
        }
        return tot;
    }
};