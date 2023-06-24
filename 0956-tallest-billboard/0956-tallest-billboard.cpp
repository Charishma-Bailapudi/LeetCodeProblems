class Solution {
public:
     int tallestBillboard(vector<int>& rods) {
        int n = rods.size();
        vector<vector<int>> dp(21, vector<int>((2*5000)+1, -1));
        int ans = helper(0, 0, rods, n, dp);
        if (ans<0)
            return 0;
        return ans;
    }

    int helper(int i, int diff, vector<int>& rods, int n, vector<vector<int>>& dp) {
        if (i == n) {
            if (diff == 0)
                return 0;
            return INT_MIN;  // Use a different value to indicate invalid result
        }
        if (dp[i][diff+5000] != -1)
            return dp[i][diff+5000];
        int nt = helper(i + 1, diff, rods, n, dp);
        int t1 = rods[i] + helper(i + 1, diff+rods[i], rods, n, dp);
        int t2 = helper(i + 1, diff - rods[i], rods, n, dp);
        return dp[i][diff+5000] = max({ nt, t1, t2 });
    }
};