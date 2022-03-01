class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& c) {
        int res = -1, dis = INT_MAX;
        for(int i = 0; i < c.size(); i++) {
            if(c[i][0] == x || c[i][1] == y) {
                int k = abs(c[i][0]-x) + abs(c[i][1]-y);
                if(k < dis) {
                    res = i;
                    dis = k;
                }
            }
        }
        return res;
    }
};