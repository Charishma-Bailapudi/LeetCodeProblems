class Solution {
public:
    void make(vector<int>&parent,vector<int>&size)
    {
        for(int i=1;i<parent.size();i++)
        {
            parent[i]=i;
            size[i]=1;
            // cout<<"parent["<<i<<"]"<<parent[i]<<endl;
        }
    }
     
    int findparent(int v,vector<int>&parent)
    {
        if(v==parent[v])
            return v;
        return  findparent(parent[v],parent);
    }

vector<vector<int>> makeunion(int a,int b,vector<int>&parent,vector<int>&size,vector<vector<int>>&ans)
{
	int x =findparent(a,parent);
	int y =findparent(b,parent);
    

	if(x==y)
		 ans.push_back({a,b});
    else
    {
	if(size[x]<size[y])
	{
		//we have to change the parent of smaller size so we are changing a,b
		int temp=x;
		x=y;
		y=temp;
	}
	  parent[y]=x;
	  size[x]=size[x]+size[y];
    }
    return ans;
}

    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        vector<int>size(edges.size()+1);
        vector<int>parent(edges.size()+1);
        vector<vector<int>>ans;
        make(parent,size);
        for(auto x:edges)
        {
            makeunion(x[0],x[1],parent,size,ans);
        }
        return ans[ans.size()-1];
    }
};