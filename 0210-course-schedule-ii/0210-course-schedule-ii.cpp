class Solution {
public:
    public:
    void calculateindegree(vector<int>&indegree,vector<vector<int>>&adj,int child)
    {
        for (auto& neighbour:adj[child])
            indegree[neighbour]++;
    }
	public:
	vector<int> topoSort(int v, vector<vector<int>>&adj) 
	{
        int count=0;
	    queue<int>q;
	    vector<int>ans;
	    vector<int>indegree(v,0);
	    for(int i=0;i<v;i++)
	    {
	        calculateindegree(indegree,adj,i);
	    }
	    
	    for(int i=0;i<v;i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int front=q.front();
	        q.pop();
	        ans.push_back(front);
            count++;
	        for(auto& neighbour:adj[front])
	        {
	                indegree[neighbour]--;
	                if(indegree[neighbour]==0)
	                    q.push(neighbour);
	        }
	    }
        if(count==v)
            return ans;
        return {};
    }
    
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=numCourses;
        vector<vector<int>> adj(n);
        for(auto &i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }
        return topoSort(n,adj);
        
    }
};