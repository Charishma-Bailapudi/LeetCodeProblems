class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<int>p;
        int n=gifts.size();
        for(int i=0;i<n;i++)
        {
            p.push(gifts[i]);
        }
        
        while(k>0)
        {
            int x=p.top();
            p.pop();
            int sq=sqrt(x);
            p.push(sq);
            k--;
        }
        long long sum=0;
        while(!p.empty())
        {
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};