class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // int ans=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //        ans=nums[i];
        //        break;
        //     }
        // }
        // return ans;
        
        
        
        // int n=nums.size();
        // int ans=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     if((nums[i]^nums[i+1])==0)
        //         return nums[i];
        // }
        // return 0;
        
        
        
        for(int i=0;i<nums.size();i++)
        {
            int id=abs(nums[i]);
            if(nums[id]<0)
                return id;
            else
                nums[id]=-nums[id];
        }
        return 0;
        
        
        
    }
};