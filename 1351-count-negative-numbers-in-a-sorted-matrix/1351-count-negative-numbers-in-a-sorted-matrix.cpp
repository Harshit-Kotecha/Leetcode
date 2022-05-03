class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size(), r = m-1, c = 0, res = 0;
        while(r >= 0 && c < n) {
            if(g[r][c] < 0) {
                res += n - c;
                r--;
            } else {
                c++;
            }
        }
        return res;
    }
};