class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ppro(n);  
        vector<int> spro(n);
        vector<int>finalpro;
        ppro[0] = 1;
        for(int i=1; i<n; i++) 
        {
            ppro[i] = ppro[i-1] * nums[i-1];
        }

        spro[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            spro[i] = spro[i+1] * nums[i+1];
        }
         
        for(int i=0;i<n;i++)
        {
            
            finalpro.push_back(ppro[i]*spro[i]);
        }
        return finalpro;
    }
};