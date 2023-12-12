class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int maxi=0;
      
        for(auto x:mp)
        {
            
            double occ = (static_cast<double>(x.second) / arr.size()) * 100.0;
        
            if(occ>25.0)
            {
                maxi=x.first;
                break;
            }
        }
        return maxi;
    }
};