class Solution
{
    // int robby(vector<int>& nums,int n)
    // {
    //     int i;
    //     if(n<=0)
    //         return 0;
    //     int pick=nums[n-1]+robby(nums,n-2);
    //     int notpick=robby(nums,n-1);
    //     return max(pick,notpick);    
    // }
    
    // int rob(vector<int>& nums) 
    // {
    //     int n=nums.size();
    //     return max(robby(nums,n),robby(nums,n-1));
    // }
    

public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        
        if (n == 0) 
            return 0;
        else if (n == 1) 
            return nums[0];
        
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }
        return max(dp[n-1], dp[n-2]);
    }
};