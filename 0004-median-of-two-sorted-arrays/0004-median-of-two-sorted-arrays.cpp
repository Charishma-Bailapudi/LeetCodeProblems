class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        if(nums1.size()==0 && nums2.size()==1)
            return nums2[0];
        if(nums2.size()==0 && nums1.size()==1)
            return nums1[0];
            
        vector<int>v;
         for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        int mid=n/2;
        if(n%2!=0)
        {
            // cout<<"v[mid] "<<v[mid]<<endl;
            return v[mid];
        }
        else
        { 
            mid=v[mid]+v[mid-1];
            return (double) mid/2 ;
        }
        
    }
   
};