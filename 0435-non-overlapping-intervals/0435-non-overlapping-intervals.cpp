class Solution {
public:
    
        bool static comp(vector <int>& a, vector <int>& b) 
        {
        return a[1] < b[1];
        }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort (intervals.begin(), intervals.end(), comp);
        int end = intervals[0][1];
        int minRemove = 0;
        for (int i = 1; i < n; i++) 
        {
            if (intervals[i][0] < end)
                minRemove++;
            else
                end = intervals[i][1];    
        }
        return minRemove;
    }
};