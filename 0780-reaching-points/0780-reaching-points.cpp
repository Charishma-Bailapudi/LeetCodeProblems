class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) 
    {
         while (tx >= sx && ty >= sy) 
         {
            if ( tx == sx && ty == sy )
                return true;
            if ( tx > ty )
                tx -= max(1, (tx - sx) / ty) * ty;
            else
                ty -= max(1, (ty - sy) / tx) * tx;                   
        }
        return false;
    }
};