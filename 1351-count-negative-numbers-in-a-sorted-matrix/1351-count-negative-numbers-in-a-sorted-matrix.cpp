class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size(), r = 0, c = n-1, res = 0;
        while(r < m && c >= 0) {
            if(g[r][c] < 0) {
                res += m - r;
                c--;
            } else {
                r++;
            }
        }
        return res;
    }
};