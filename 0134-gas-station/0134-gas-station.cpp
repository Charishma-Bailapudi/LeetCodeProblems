class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        long long int deficit=0;
        long long int balance=0;
        int front=0;
        int N=gas.size();
        for(int rear=0;rear<N;rear++)
        {
            balance+=gas[rear]-cost[rear];
            if(balance<0)
            {
                deficit+=balance;
                front=rear+1;
                balance=0;
            }
        }

        if(deficit+balance>=0)
        return front;
        else
            return -1;
    }
};