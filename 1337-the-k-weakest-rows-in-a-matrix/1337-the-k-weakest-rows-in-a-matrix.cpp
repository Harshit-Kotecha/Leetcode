class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int, vector<int>> m;
        set<int> s;
        for(int i = 0; i < mat.size(); i++) {
            int j;
            for(j = 0; j < mat[i].size() && mat[i][j] == 1; j++);
            s.insert(j);
            m[j].push_back(i);
        }
        vector<int> res;
        for(auto& i : s) {
            //if(k <= 0) break;
            for(int j : m[i]) {
                if(k-- <= 0) break;
                res.push_back(j);
            }
        }
        return res;
    }
};