//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
static bool comp(Job j1, Job j2)
    {
        return j1.profit > j2.profit;
    }
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
     sort(arr, arr + n, comp);
        vector<int> ans;
        vector<bool> slot(n, false);
        int max_profit = 0, count = 0;
        // Iterate through all given jobs
        for (int i = 0; i < n; i++) {
            // Find a free slot for this job (Note that we start
            // from the last possible slot)
            for (int j = arr[i].dead - 1; j >= 0; j--) {
                // Free slot found
                if (slot[j] == false)
                {
                    ans.push_back(arr[i].id); // Add this job to result
                    slot[j] = true; // Make this slot occupied
                    count++; // Increment the number of jobs scheduled
                    max_profit += arr[i].profit; // Add the profit of this job to the total profit
                    break;
                }
            }
        }
        return {count, max_profit};
 
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends