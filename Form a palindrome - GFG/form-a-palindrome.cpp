//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string s1)
    {
        // code here 
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for(int i = 0;i <= n;++i)
        {
            for(int j = 0;j <= m;++j)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1+dp[i - 1][j - 1] ;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j - 1]);
            }
        }
        return n-dp[n][m];
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends