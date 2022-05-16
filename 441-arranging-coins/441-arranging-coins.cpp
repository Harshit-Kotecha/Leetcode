class Solution {
public:
    int arrangeCoins(long long n) {
        //long long n = x;
        return (sqrt(1 + 8*n) - 1) / 2;
    }
};