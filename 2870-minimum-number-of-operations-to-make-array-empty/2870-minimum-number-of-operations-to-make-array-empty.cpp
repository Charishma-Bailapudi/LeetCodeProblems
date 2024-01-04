class Solution {
public:
    int minOperations(vector<int>& nums)
    {
       
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count=0;
        for(auto x:mp)
        {
            int a=x.second;
            
            if(a==1)
            {
                return -1;
            }
           else
           {
               count+=ceil((a+2)/3);
           }
        }
        return count;
        
    }
};