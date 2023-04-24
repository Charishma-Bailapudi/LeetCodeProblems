class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k)
    {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++) 
        {
            int lcmnum = nums[i];
            if(lcmnum == k)
                count++;
            for(int j=i+1; j<n; j++)
            {
                lcmnum =lcm(lcmnum, nums[j]);
                if(lcmnum>k)
                    break;
                if(lcmnum == k) 
                    count++;
            }
        }
        return count;
    }
};