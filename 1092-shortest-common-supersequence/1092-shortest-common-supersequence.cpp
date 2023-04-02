class Solution {
public:
    string s="";
    string shortestCommonSupersequence(string str1, string str2) {
    int m=str1.size();
    int n=str2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j] =0;
            else if(str1[i-1] == str2[j-1])
                dp[i][j] = 1+ dp[i-1][j-1];
            else
            {
                int a = dp[i-1][j];
                int b = dp[i][j-1];
                dp[i][j] = max(a,b);
            }
        }
    }
    int temp1 = m,temp2 = n;
    while(dp[m][n]>0)
    {
        if(str1[m-1] == str2[n-1])
        {
            s += str1[m-1] ;
            m--;
            n--;
        }
        else
            if(dp[m-1][n] > dp[m][n-1])
            {
                s+=str1[m-1];
                m--;
            }
            else
            {
                s+=str2[n-1];
                n--;
            }
    }
         while (m > 0) {
            s += str1[m-1];
            m--;
        }
        while (n > 0) {
            s += str2[n-1];
            n--;
        };
    

    reverse(s.begin(),s.end());
    return s;

    }
};