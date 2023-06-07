class Solution {
public:
    int minBitFlips(int start, int goal)
    {
        int n=start^goal;
        int count=0;
        while(n)
        {
            if(n&1)
            {
                count++;
            }
            n>>=1;
        }
        return count;
    }
};