//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &vis, 
    int n, int m, int delrow[], int delcol[]){
        vis[i][j]=1;
        for(int ind=0; ind<4; ind++)
        {
            int nrow=i+delrow[ind];
            int ncol=j+delcol[ind];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1
            && vis[nrow][ncol]!=1)
            {
                dfs(nrow, ncol, grid, vis, n, m, delrow, delcol);
            }
        }
    }
  
    int numberOfEnclaves(vector<vector<int>> &grid) 
    {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        
        int delrow[]={-1, 0, 1, 0};
        int delcol[]={0, 1, 0, -1};
        
        for(int i=0; i<n ;i++){
            if(grid[i][0]==1 && vis[i][0]!=1)
            {
                dfs(i, 0, grid, vis, n, m, delrow, delcol);
            }
            if(grid[i][m-1]==1 && vis[i][m-1]!=1)
            {
                dfs(i, m-1, grid, vis, n, m, delrow, delcol);
            }
        }
        for(int j=1; j<m-1; j++)
        {
            if(grid[0][j]==1 && vis[0][j]!=1)
            {
                dfs(0, j, grid, vis, n, m, delrow, delcol);
            }
            if(grid[n-1][j]==1 && vis[n-1][j]!=1){
                dfs(n-1, j, grid, vis, n, m, delrow, delcol);
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1 && vis[i][j]!=1) 
                    cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends