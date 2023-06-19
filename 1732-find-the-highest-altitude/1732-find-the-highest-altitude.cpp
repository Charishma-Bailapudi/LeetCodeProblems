class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        vector<int>v(gain.size() + 1);
        v[0]=0;
        int maxi=0;
        for(int i=1;i<=gain.size();i++)
        {
            int alt=v[i-1]+gain[i-1];
            maxi=max(alt,maxi);
            v[i]=(alt);
        }
        if(maxi>0)
            return maxi;
        return 0;
    }
};