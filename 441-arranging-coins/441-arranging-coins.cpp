class Solution {
public:
    int arrangeCoins(int x) {
        long long n = x;
        return (sqrt(1 + 8*n) - 1) / 2;
    }
};