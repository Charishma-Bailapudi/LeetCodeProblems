class Solution {
public:
    int f(int ind, int end, int W, vector<int>& locations,vector<vector<int>>&dp){
        int total = 0;
        if(ind==end) total++;
        if(dp[ind][W]!=-1)return dp[ind][W];

        int mod = 1e9+7;
        for(int k=0;k<locations.size();k++){
            if(k==ind)continue;
            if(W>=abs(locations[ind]-locations[k])){
                total = (total + f(k,end,W-abs(locations[ind]-locations[k]),locations,dp))%mod;
            }
        }
        return dp[ind][W] = total;
    }


    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        vector<vector<int>>dp (locations.size()+5,vector<int>(fuel+5,-1));
        return f(start,finish,fuel,locations,dp);
    }
};