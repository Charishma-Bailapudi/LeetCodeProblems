class Solution {
public:
    int gcd(int a,int b)
    {
        if(a==b)
            return a;
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
    int findGCD(vector<int>& nums) 
    {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      int a=nums[0];
      int b=nums[n-1];
      return gcd(a,b);
    }
};