class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        while(targetX%2==0)
            targetX/=2;
        while(targetY%2==0)
            targetY/=2;
        int ans=__gcd(targetX,targetY);
        if(ans==1)
            return true;
        return false;
    }
};