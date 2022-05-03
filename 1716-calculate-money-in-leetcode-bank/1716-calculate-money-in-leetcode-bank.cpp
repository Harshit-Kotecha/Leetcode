class Solution {
public:
    int totalMoney(int n) {
        int res = 0;
        int t = n / 7, v = n%7;
        for(int i = 1; i <= t; i++) {
            res += 3 + i;
        }
        res *= 7;
        for(int i = 1; i <= v; i++) {
            res += i + t;
        }
        return res;
    }
};