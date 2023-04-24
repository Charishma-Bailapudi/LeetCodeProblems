class Solution {
public:
    int setcount(string x)
    {
        int count=0;
        for (char y:x)
        {
            int m=y-0;
            if(m&1)
                count++;
        }
        return count;
    }
    bool makeStringsEqual(string s, string target) 
    {
        if(s==target)
            return true;
       int count1=setcount(s);
       int count2=setcount(target);
           
        if(count1==0 || count2==0)
            return false;
        return true;
        
        
        
    }
};