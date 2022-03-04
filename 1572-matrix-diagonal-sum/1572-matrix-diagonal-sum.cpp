class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                if(i == j)
                    res += mat[i][j];
                else if(i+j == mat[i].size()-1)
                    res += mat[i][j];
            }
        }
        return res;
    }
};