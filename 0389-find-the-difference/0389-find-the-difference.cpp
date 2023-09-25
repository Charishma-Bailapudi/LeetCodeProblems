class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        char r=0;
        for(char c:s) 
            r ^=c;
        for(char c:t) 
            r ^=c;
        return r;
        
    }
};