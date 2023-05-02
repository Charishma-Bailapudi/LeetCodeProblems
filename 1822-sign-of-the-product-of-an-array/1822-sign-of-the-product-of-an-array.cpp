class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
       int pro=1;
       for(int i:nums)
       {
            if(i==0)
                return 0;
            else if (i < 0) 
                pro = -pro;
        }
        return  pro;
    }
};