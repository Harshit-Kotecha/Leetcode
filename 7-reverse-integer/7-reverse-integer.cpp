class Solution {
public:
    int reverse(long x) {
        if(x > INT_MAX || x < INT_MIN) return 0;
        
        long res = 0, sign = 1;
        if(x < 0) {
            sign = -1;
            x *= -1;
        }
        while(x) {
            if(res == 0 && x%10 == 0) {
                x /= 10;
                continue;
            }
            res = (res*10) + (x%10);
            x /= 10;
        }
        res *= sign;
        if(res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};