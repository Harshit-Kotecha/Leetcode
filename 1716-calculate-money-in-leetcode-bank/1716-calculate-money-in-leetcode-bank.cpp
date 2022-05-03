class Solution {
public:
    int totalMoney(int n) {
        int f = n / 7, d = n%7;
        return (f * (49 + (f*7))) / 2 + ((d * (2*(f+1) + d - 1))) / 2;
    }
};