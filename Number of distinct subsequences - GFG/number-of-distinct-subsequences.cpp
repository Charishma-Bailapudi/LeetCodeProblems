//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
  

	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    long M=1e9+7;
	    vector<long long>ans(26,0);
	  
	    for(int i=0;i<s.length();i++)
	    {
	       ans[s[i]-'a']=accumulate(ans.begin(),ans.end(),1L)%M;
	    }
	    
	    
	    return accumulate(ans.begin(),ans.end(),0L)%M+1;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends