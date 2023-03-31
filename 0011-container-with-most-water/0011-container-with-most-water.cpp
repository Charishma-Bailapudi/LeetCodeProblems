class Solution {
public:
    int maxArea(vector<int>& height) {
        // vector<int>maxwater;
        // int n=height.size();
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     int count=0;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int diff=min(height[i],height[j]);
        //         count+=1;
        //         int pro=diff*count;
        //         maxwater.push_back(pro);
        //     }
        // }
        // return *max_element(maxwater.begin(), maxwater.end());
        
        vector<int>maxwater;
        int n=height.size();
        int i=0;
        int j=n-1;
        for(int k=0;k<n;k++)
        {
            int heights=min(height[i],height[j]);
            int width=j-i;
            int pro=heights*width;
            maxwater.push_back(pro);
            if(heights==height[i])
                i++;
            else
                j--;
        }
        
        return *max_element(maxwater.begin(), maxwater.end());
        
    }
};