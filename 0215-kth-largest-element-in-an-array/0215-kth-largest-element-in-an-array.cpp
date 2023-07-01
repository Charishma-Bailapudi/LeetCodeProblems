class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int>pq;
        for(auto i:nums)
            pq.push(i);
        int x;
        while(k)
        {
            x=pq.top();
            pq.pop();
            k--;
        }
        return x;
    }
};