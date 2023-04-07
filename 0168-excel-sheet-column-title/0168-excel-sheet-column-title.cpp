class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        int n=columnNumber;
        string ans;    
        while(n--)
        {
            ans.push_back(n % 26 + 'A');
            n /= 26;
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};