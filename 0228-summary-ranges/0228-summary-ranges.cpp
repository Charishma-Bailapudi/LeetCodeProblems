class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string>vec;
        if(nums.size()<1) 
            return vec;
        
        int ans=nums[0];
        int result=nums[0];
        int n=nums.size();

        for(int i=0;i<nums.size()-1;i++) 
        {
            if(nums[i]+1==nums[i+1])
            {
                result=nums[i+1];
            }
            else 
            {
                if(ans==result)
                {
                    vec.push_back(to_string(ans));
                }
                else
                {
                    vec.push_back(to_string(ans)+"->"+to_string(result));
                    
                }
                ans=result=nums[i+1];      
            }
        }
        if(ans==result) 
        {
            vec.push_back(to_string(ans));
        }
        else
        {
             vec.push_back(to_string(ans)+"->"+to_string(result));
        }
     
        return vec;

    }
};