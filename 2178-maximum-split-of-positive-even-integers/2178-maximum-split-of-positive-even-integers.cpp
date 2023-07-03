class Solution {
public:
    vector<long long>v;
    int cnt=0;
    void helper(long long finalSum,long long n)
    {  
        long long newsum=finalSum - n;
        if (newsum >= 0)
        {
            v.push_back(n);
            helper(newsum, n + 2);
            if(cnt==0)
            {
               v.pop_back();  // Remove the last element
               v.push_back(finalSum); 
                cnt++;
            }
        }
        
                 
    }
    vector<long long> maximumEvenSplit(long long finalSum) 
    {
        
        if(finalSum%2!=0)
        {
            return v;
        }
            
        helper(finalSum,2);
        return v;
    }
};