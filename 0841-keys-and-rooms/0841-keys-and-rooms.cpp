class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int n=rooms.size();
        vector<int> visited(n,false);
        int count=0;
        int sv = 0;
        visited[0]=true;
        queue<int>q;
        q.push(sv);
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            count++;
            for(auto& neighbour:rooms[front])
            {
                if(!visited[neighbour])
                {
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            } 
        }
        return count==n ;
        
        
    }
};