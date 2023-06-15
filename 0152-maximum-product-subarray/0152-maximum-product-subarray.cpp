class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxi=INT_MIN;
        int pre=1;
        int suff=1;
        for(int i=0;i<nums.size();i++)
        {
            if(pre==0)
                pre=1;
            
            pre*=nums[i];
            if(pre>maxi)
                maxi=max(pre,maxi);    
        }
        
        for(int i=nums.size()-1;i>=0;i--)
        {
             if(suff==0)
                suff=1;
            
            suff*=nums[i];
            if(suff>maxi)
                maxi=max(suff,maxi); 
        }
        
        return maxi;
    }
};