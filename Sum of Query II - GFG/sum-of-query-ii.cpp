//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

vector<int>segment;
void build(int index,int low,int high,int arr[])
{
	if(low==high)   //filling leaf nodes
	{
		segment[index]=arr[low];
		return ;
	}

	int mid=(low+high)/2;
	build(2*index+1,low,mid,arr);  //left side
	build(2*index+2,mid+1,high,arr);  //right side

	segment[index]=segment[2*index+1]+segment[2*index+2];
}

int find(int index,int l,int r,int low,int high)
{
	if(low>=l && high<=r)
	{
		return segment[index];
	}

	// if((l<low && r<low) || (l>high &&r>high))
	if(high<l || low>r)
		return 0;
	int mid=(high+low)/2;
	int a=find(2*index+1,l,r,low,mid);
	int b=find(2*index+2,l,r,mid+1,high);

	return a+b;
}

    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        segment.resize(4 * n);
        build(0,0,n-1,arr);
        vector<int>v;
    	int ans=INT_MIN;
    	int i=0;
    	while(q--)
    	{
    		int l=queries[i]-1;
    		int r=queries[i+1]-1;
    		ans=find(0,l,r,0,n-1);
    		v.push_back(ans);
    		i+=2;
    	}
    	return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>q;
        int queries[2*q];
        for(int i = 0;i < 2*q;i += 2)
            cin>>queries[i]>>queries[i+1];
        
        Solution ob;
        vector<int> ans = ob.querySum(n, arr, q, queries);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends