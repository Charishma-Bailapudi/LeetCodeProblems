class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
     sort(nums.begin(),nums.end());
     int m=nums.size()-1;
     return (nums[m]-1)*(nums[m-1]-1);
        
    }
};