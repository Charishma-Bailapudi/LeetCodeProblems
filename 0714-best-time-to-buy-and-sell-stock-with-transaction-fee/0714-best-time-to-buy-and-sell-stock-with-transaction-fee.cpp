class Solution {
public:

    vector<vector<int>> dp;

    int solve(int idx, vector<int> &prices, int fee, int buying)
    {
        if(idx >= prices.size())
            return 0;

        if(dp[idx][buying]!=-1)
            return dp[idx][buying];

        if(buying)
            return dp[idx][1] = max(-prices[idx]-fee+solve(idx+1,prices,fee,0),solve(idx+1,prices,fee,1));
        else
            return dp[idx][0] = max(prices[idx]+solve(idx+1,prices,fee,1),solve(idx+1,prices,fee,0));
    }

    int maxProfit(vector<int>& prices, int fee) {
        dp.resize(prices.size(),vector<int> (2,-1));
        return solve(0,prices,fee,1);
    }
};