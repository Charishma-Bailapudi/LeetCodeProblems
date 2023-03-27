class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int index=1;
        for(int i=1;i<len;i++)
        {
                if(nums[i]!=nums[i-1])
                {
                  nums[index]=nums[i];
                  index++;
                }            
        }
        return index;
    }
};