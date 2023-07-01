class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int>p;
        for(auto x:stones)
            p.push(x);
        while(p.size()>1)
        {
            int x1=p.top();
            p.pop();
            int x2=p.top();
            p.pop();
            if(x1==x2)
                continue;
            else
            {
                int x3=x1-x2;
                p.push(x3);
            }
               
        }
        
        return p.size()? p.top():0;
    }
};