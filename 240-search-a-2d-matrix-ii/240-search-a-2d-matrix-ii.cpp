class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m = mat.size(), n = mat[0].size(), r = m-1, c = 0;
        while(r >= 0 && c < n) {
            if(mat[r][c] == t) return 1;
            else if(mat[r][c] > t) {
                r--;
            } else {
                c++;
            }
        }
        return 0;
    }
};