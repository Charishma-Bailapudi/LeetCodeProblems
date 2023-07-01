class Solution {
public:
    int dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j) {
        if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || vis[i][j] == 1 || grid[i][j] == 0)
            return 0;
        
        vis[i][j] = 1;
        return grid[i][j] + dfs(grid, vis, i, j + 1) + dfs(grid, vis, i, j - 1) + dfs(grid, vis, i + 1, j) + dfs(grid, vis, i - 1, j);
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int maxi = -1;
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > 0)
                    maxi = max(dfs(grid, vis, i, j), maxi);
            }
        }
        
        if (maxi == -1)
            return 0;
        return maxi;
    }
};
