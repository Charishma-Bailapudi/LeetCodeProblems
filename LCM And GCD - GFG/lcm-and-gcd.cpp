//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int gcd(long long a,long long b)
    {
        if(a==b)
            return a;
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>ans;
        long long mul=A*B;
        long long gcdis=gcd(A,B);
        long long lcm=mul/gcdis;
       
        ans.push_back(lcm);
        ans.push_back(gcdis);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends