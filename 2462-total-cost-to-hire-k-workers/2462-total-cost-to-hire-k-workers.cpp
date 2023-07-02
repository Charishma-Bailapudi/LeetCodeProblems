class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates)
    {

        priority_queue<int,vector<int>,greater<int>> p1,p2;
        int i=0,j=costs.size()-1;
        long long sum=0;
        int x,y;
        while(k>0)
        {
            while(p1.size()<candidates && i<=j)
            {
                p1.push({costs[i]});
                i++;
            }
            
            while(p2.size()<candidates && i<=j)
            {
                p2.push({costs[j]});
                j--;
            }
             
            if(p1.size()>0) x=p1.top();
            else x=INT_MAX;
            
            if(p2.size()>0)  y=p2.top();
            else y=INT_MAX;
            
            
            if(x<=y)
            {
                sum+=x;
                p1.pop();
            }
            else
            {
                sum+=y;
                p2.pop();
            }
            k--;
           
        }
        
        return sum;
        
    }
};
    