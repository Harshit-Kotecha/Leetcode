class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0, b = sqrt(c) + 1;
        while(a <= b) {
            long long x = (a*a) + (b*b);
            if(x < c) 
                a++;
            else if(x > c)
                b--;
            else if(x == c)
                return 1;
        }
        return 0;
    }
};