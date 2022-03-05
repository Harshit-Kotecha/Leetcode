class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n = mat.size();
        for(auto m : mat) {
            vector<int> cnt(n+1, 0);
            for(int x : m)
                cnt[x]++;
            for(int i = 1; i <= n; i++)
                if(cnt[i] < 1)
                    return 0;
        }
        for(int i = 0; i < n; i++) {
            vector<int> cnt(n+1, 0);
            for(int j = 0; j < n; j++) {
                cnt[mat[j][i]]++;
            }
            for(int i = 1; i <= n; i++)
                if(cnt[i] < 1) return 0;
        }
        return 1;
    }
};