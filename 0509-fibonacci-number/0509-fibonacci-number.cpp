class Solution {
public:
    int fib(int n) {
        
        //using recurssion
        // if(n==0)
        //     return 0;
        // if(n==1)
        //     return 1;
        // return fib(n-1)+fib(n-2);
        
        //using dp
        
        
        int dp[n+1];
        dp[0]=0;
        if(n>=1)
        { 
            dp[1]=1;
            for(int i=2;i<n+1;i++)
                dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};