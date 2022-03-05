class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; i++) {
            vector<int> row(n+1, 0);
            vector<int> col(n+1, 0);
            for(int j = 0; j < n; j++) {
                if(row[mat[i][j]] > 0 || col[mat[j][i]] > 0)
                    return 0;
                row[mat[i][j]]++;
                col[mat[j][i]]++;
            }
        }
        return 1;
    }
};