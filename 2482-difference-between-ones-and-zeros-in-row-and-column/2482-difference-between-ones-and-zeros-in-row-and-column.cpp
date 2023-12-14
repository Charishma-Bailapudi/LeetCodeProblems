class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        
        vector<int>onerow(n,0);
        vector<int>zerorow(n,0);
        vector<int>onecol(m,0);
        vector<int>zerocol(m,0);
               
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(mat[i][j]==1)
              {
                  onerow[i]+=1;
                  onecol[j]+=1;
              }
             
                else
              {
                  zerorow[i]+=1;
                  zerocol[j]+=1;
              }
                
              
            }
        }
        
        
        vector<vector<int>>grid(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                grid[i][j]=onerow[i]+onecol[j]-zerorow[i]-zerocol[j];
            }
        }
        return grid;
    }
};