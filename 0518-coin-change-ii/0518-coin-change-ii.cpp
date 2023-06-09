class Solution {
public:
    int change(int amount, vector<int>& coins) {
         int n=coins.size();
         vector<vector<int>>dp(n+1,vector<int>(amount+1));
         
         for(int i=0;i<n+1;i++)
         {
             for(int j=0;j<amount+1;j++)
             {
                 if(i==0 && j==0)
                    dp[i][j]=true;
                else if(i==0)
                    dp[i][j]=false;
                else if(j==0)
                    dp[i][j]=true;
                else
                {
                     if(coins[i-1] > j)
                        dp[i][j] = dp[i-1][j];
                    else
                    {
                        int take = dp[i][j-coins[i-1]];
                        int nottake = dp[i-1][j];
                        dp[i][j] = take+nottake;   
                    }
                }
             }
         }
    return dp[n][amount];
            
            
    }
};