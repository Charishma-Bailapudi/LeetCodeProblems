class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<int>>&v,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()|| v[i][j]==1 || grid[i][j]==0)
            return 0;
        else
        {
            v[i][j]=1;
           
            int total=grid[i][j];
             grid[i][j]=0;
            int a=dfs(grid,v,i+1,j);
            int b=dfs(grid,v,i-1,j);
            int c=dfs(grid,v,i,j+1);
            int d=dfs(grid,v,i,j-1);
            int maxi=max(max(a,b),max(c,d));
            grid[i][j]=total;
            v[i][j]=0;
            return total+maxi;
        }
        return 0;
       
    }
    
    
    int getMaximumGold(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        int maxGold = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(grid[i][j]>0)
                {
                    int sum = dfs(grid, v, i, j);
                    maxGold = max(maxGold, sum);
                }
            }
        }
        return maxGold;
    }
};