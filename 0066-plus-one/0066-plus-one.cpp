class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int len = digits.size();        
        for(int i=len-1; i>=0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]+=1;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        
        vector<int> arr(len);
        arr.insert(arr.begin(), 1);
        
        return arr;
    }
};