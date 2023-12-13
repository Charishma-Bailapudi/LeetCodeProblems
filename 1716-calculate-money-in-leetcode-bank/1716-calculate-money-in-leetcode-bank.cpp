class Solution {
public:
    int totalMoney(int n) 
    {
        int w = n / 7;
        int money = 28*w + (7 * w * (w - 1)) / 2 ;
       
        if (n % 7 != 0) 
        {
            int remdays = n % 7;
            int newmoney = w+1;
            for (int i=0;i<remdays;i++)
            {
                money+=newmoney;
                newmoney++;
            }
        }

        return money;
    }
};