class Solution {
public:
    int equalPairs(vector<vector<int>>& grid)
    {
        int n = grid.size(), count = 0;

        for(int row=0; row<n; row++) 
        {
            for(int col=0; col<n; col++) 
            {
                int flag = 1;
                for(int k=0; k<n; k++)
                {
                    if(grid[row][k]!=grid[k][col]) 
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    count++;
            }
        }
        return count;
    }
};