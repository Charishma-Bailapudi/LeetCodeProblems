class Solution {
public:
      
    int matrixSum(vector<vector<int>>& nums) 
    {
//         vector<vector<int>>v;
//       for(auto &x:nums)
//       {
//           sort(x.begin(),x.end());
//           v.push_back(x);
//       }
//         vector<int>a;
//       for(int i=0;i<v.size();i++)
//       {
//           int maxi=-1;
//           for(int j=0;j<v[0].size();j++)
//           {
//               maxi=max(maxi,v[j][i]);
//           }
//           a.push_back(maxi);
//       }
        
//         int ans=accumulate(a.begin(),a.end(),0); 
//         return ans;   
        
        priority_queue<int>p;
        vector<int>v(nums[0].size(),-1);
        for(auto &x:nums)
        {
            int ind=0;
            for(int i=0;i<x.size();i++)
            {
                p.push(x[i]);
            }
            
            while(!p.empty())
            {
                if(v[ind]<p.top())
                {
                    v[ind]=p.top();
                }
                p.pop();
                ind++;
            }
        }
        int sum=accumulate(v.begin(),v.end(),0);
        return sum;
    }
};