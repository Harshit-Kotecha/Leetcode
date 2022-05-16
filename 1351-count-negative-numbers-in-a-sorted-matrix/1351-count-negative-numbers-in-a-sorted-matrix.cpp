class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int i = g.size() - 1, j = 0, r = g.size(), c = g[0].size();
        int res = 0;
        while(i >= 0 && j < c) {
            if(g[i][j] < 0) {
                res += c - j;
                i--;
            } else {
                j++;
            }
        }
        return res;
    }
};