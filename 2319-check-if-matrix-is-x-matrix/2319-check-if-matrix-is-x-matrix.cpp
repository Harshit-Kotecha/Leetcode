class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& g) {
        for(int i = 0; i < g.size(); i++) {
            for(int j = 0; j < g[i].size(); j++) {
                if(i == j || (i + j + 1) == g.size()) {
                    if(g[i][j] == 0) return 0;
                } else if(g[i][j] != 0) return 0;
            }
        }
        return 1;
    }
};