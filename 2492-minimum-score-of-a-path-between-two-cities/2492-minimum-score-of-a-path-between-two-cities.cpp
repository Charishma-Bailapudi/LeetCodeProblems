#include <algorithm>
#include <vector>

class Solution {
public:
    void make(vector<int>& parent, vector<int>& size)
    {
        for(int i = 1; i < parent.size(); i++) 
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findparent(int v, vector<int>& parent)
    {
        if (v == parent[v])
            return v;
        return parent[v] = findparent(parent[v], parent);
    }

    void makeunion(int a, int b,vector<int>& parent, vector<int>& size)
    {
        int x = findparent(a, parent);
        int y = findparent(b, parent);

        if (x == y)
            return ;
        else 
        {
            if (size[x] < size[y])
            {
                int temp = x;
                x = y;
                y = temp;
            }
            parent[y] = x;
            size[x] = size[x] + size[y];
        }
    }

       int minScore(int n, vector<vector<int>>& roads)
       {
        vector<int> size(n+1,0);
        vector<int> parent(n+1,0);
        make(parent, size);
        for (auto x : roads) 
        {
            makeunion(x[0], x[1], parent, size);
        }
         int mini=INT_MAX;
        for(int i = 1;i <= n;i++) findparent(i,parent);
           int one = parent[1];
        for(int i=0;i<roads.size();i++)
        {
           if(parent[roads[i][0]]==one)
               mini=min(roads[i][2],mini);    
        }
         return mini;
        
    }
};
