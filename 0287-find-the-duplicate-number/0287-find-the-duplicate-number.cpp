class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int res=1,res1=1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     res=res*nums[i];
        // }
        // for(int i=1;i<nums.size();i++)
        // {
        //     res1=res1*i;
        // }
        // return res/res1;
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
               ans=nums[i];
               break;
            }
        }
        return ans;
        
    }
};