class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int targetnum=target-'0';
        for(char i : letters)
        {
            int ch=i-'0';
            if(ch>targetnum)
                return i;
        }
        return letters[0];
            
    }
};