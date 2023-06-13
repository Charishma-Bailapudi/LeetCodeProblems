//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> s1, s2;
public:

    void enqueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
  
        // Push item into s1
        s1.push(x);
  
        // Push everything back to s1
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue() 
    {
         if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }
  
        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }   
    
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}

// } Driver Code Ends