class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                // Skip duplicate elements
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    
                    // Skip duplicate elements for j and k
                    do { 
                        j++;
                       } while (j < k && nums[j] == nums[j - 1]);
                    do {
                        k--;
                       } while (j < k && nums[k] == nums[k + 1]);
                } else if (sum < 0)
                {
                    j++;
                } 
                else
                {
                    k--;
                }
            }
        }
        
        return ans;
    }
};
