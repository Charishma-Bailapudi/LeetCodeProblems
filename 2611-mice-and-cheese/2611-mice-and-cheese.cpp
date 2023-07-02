class Solution {
public:
    
  int miceAndCheese(vector<int>& r1, vector<int>& r2, int k)
    {
        int n=r1.size();
        priority_queue<pair<int,int>>p;
        for(int i=0;i<n;i++)
        {
            p.push({r1[i]-r2[i],i});
        }
        int score = 0;
        while(k>0)
        {
            int a=p.top().first;
            int b=p.top().second;
            p.pop();
            score+=r1[b];
            k--;
        }
        
         while(p.size()>0)
        {
            int a=p.top().first;
            int b=p.top().second;
            p.pop();
            score+=r2[b];
        }
        return score;
    }
};