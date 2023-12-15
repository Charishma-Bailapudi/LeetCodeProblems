class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto x:mp)
        {
            if(2*x.second>nums.size())
            {
                return x.first;
            }
        }
        return -1;
    }
};