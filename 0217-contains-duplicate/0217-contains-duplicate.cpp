class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int>mp;
        for(auto &x:nums)
        {
            mp[x]++;
        }
        int count=0;
        for(auto &y:mp)
        {
            if(y.second >=2)
                count++;
        }
        if(count>0)
         return true;
        return false;
    }
};