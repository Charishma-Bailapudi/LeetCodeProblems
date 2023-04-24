class Solution {
public:
    
    int numSplits(string s) 
    {
        int n=s.length();
        unordered_set <char> res;
        vector<int>pre(n,0);
        vector<int>suff(n,0);
        pre[0]=suff[n-1]=1;
        res.insert(s[0]);
        for(int i=1;i<n;i++)
        {
            if(res.find(s[i])==res.end())
            {
                pre[i]=pre[i-1]+1;
                res.insert(s[i]);
            }
            else
            {
                pre[i]=pre[i-1];
            }
               
        }
        res.clear();
        res.insert(s[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(res.find(s[i])==res.end())
            {
                suff[i]=suff[i+1]+1;
                res.insert(s[i]);
            }
            else
            {
                suff[i]=suff[i+1];
            }
               
        }
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(pre[i-1]==suff[i])
                count++;
        }
        return count;
    }
};