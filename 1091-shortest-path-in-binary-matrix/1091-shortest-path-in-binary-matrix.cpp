class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        
        int dirs[8][2]={{0,1},{1,0},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        queue<pair<int,int>>q;
        q.push({0,0});
        int steps=1;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                int a=q.front().first;
                int b=q.front().second;
                if(a==n-1 and b==n-1)  //last cell goal state
                {
                    return steps;
                }
                q.pop();
                for(int i=0;i<8;i++)
                {
                    int x=a + dirs[i][0];
                    int y=b + dirs[i][1];
                    if(x>=0 and x<n and y>=0 and y<n and grid[x][y]==0)
                    {
                        q.push({x,y});
                        grid[x][y]=-1;  //marking visited by making the cell -1 so we don't visit the same cell again
                    }
                }
            }
            steps++; //after we iterate through all 8-way connected cells from each sell we increment the steps
        }
        return -1;
    
        
    }
};