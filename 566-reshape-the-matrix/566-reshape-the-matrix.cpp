class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> a;
        for(auto v : mat) {
            for(auto x : v)
                a.push_back(x);
        }
        if(a.size() != r*c)
            return mat;
        int k = 0;
        vector<vector<int>> res(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                res[i][j] = a[k++];
            }
        }
        return res;
    }
};