class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> sub;
        for (int x : nums)
        {
            if (sub.empty() || sub[sub.size() - 1] < x)
            {
                sub.push_back(x);
            } 
            
            else 
            {
                // Find the index of the first element >= x
                auto it = lower_bound(sub.begin(), sub.end(), x); 
                
                // Replace that number with x
                *it = x;    
            }
        }
        return sub.size();
    }
};