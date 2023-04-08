class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        int i=0;
        int sum=0;
        reverse(columnTitle.begin(),columnTitle.end());
        for(char ch:columnTitle)
        {
            int num=ch-'A'+1;
            sum=sum+(num)*pow(26,i);
            i++;
        }
        return sum;
    }
};