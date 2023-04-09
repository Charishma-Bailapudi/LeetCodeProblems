class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1,j=0,m=0;
        vector<int>miss;
        while(j<k)
        {
            if( m<=arr.size()-1 && i==arr[m])
            {
                i++;
                m++;
            }
            else
            {
                miss.push_back(i);
                j++;
                i++;
            }   
        }
        return miss[k-1];
    }
};