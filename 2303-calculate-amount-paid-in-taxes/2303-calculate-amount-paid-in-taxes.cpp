class Solution {
public:
    double calculateTax(vector<vector<int>>& b, int k) {
        double res = 0.0;
        res += (double)(min(k, b[0][0]) * b[0][1]) / 100;
        k -= b[0][0];
        for(int i = 1; i < b.size() && k > 0; i++) {
            res += (double)(min(k, b[i][0] - b[i-1][0]) * b[i][1]) / 100;
            k -= (b[i][0] - b[i-1][0]);
        }
        return res;
    }
};