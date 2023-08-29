class Solution {
public:
    
      int bestClosingTime(string cs)    {
         int con=0,mx=0,res=0;
            for(int i=0;i<cs.length();i++)
            {
                if(cs[i]=='Y')
                   con++;
                else
                    con--;
                if(con>mx)
                {
                    mx=con;
                    res=i+1;
                }
            }
        return res;
    }
};