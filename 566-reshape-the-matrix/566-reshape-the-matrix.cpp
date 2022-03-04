class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // vector<int> a;
        // for(auto v : mat) {
        //     for(auto x : v)
        //         a.push_back(x);
        // }
        int x = mat.size(), y = mat[0].size();
        if(x*y != r*c)
            return mat;
        // if(a.size() != r*c)
        //     return mat;
        //int k = 0;
        int m = 0, n = 0;
        vector<vector<int>> res(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                res[i][j] = mat[m][n++];
                if(n == mat[0].size()) {m++; n = 0;}
            }
        }
        return res;
    }
};