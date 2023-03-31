class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> psum(n);  
        vector<int> ssum(n);

        psum[0] = nums[0];
        for(int i=1; i<n; i++) 
        {
            psum[i] = psum[i-1] + nums[i];
        }

        ssum[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
            ssum[i] = ssum[i+1] + nums[i];
            
        }
        for(int i=0;i<n;i++)
        {
            if(psum[i] == ssum[i]) 
            {
                return i;
            }
        }

        return -1;
    }
};
