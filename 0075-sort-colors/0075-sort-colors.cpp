class Solution
{
public:
   void swapnum(int &num1, int &num2)
   {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void sortColors(vector<int>& nums) 
    {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swapnum(nums[low], nums[mid]);
                low++; 
                mid++;
            } 
            
            else if (nums[mid]==1)
            {
                mid++;
            } 
            
            else 
            {
                swapnum(nums[high], nums[mid]);
                high--;
            }
        }
    }
};