class Solution {
public:
    int xorBeauty(vector<int>& nums) 
    {
        int sum=0;
        for(int num:nums)
            sum=sum^num;
        return sum;
    }
};