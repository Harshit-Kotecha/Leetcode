class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>> res;
        int i = 0, j = 0, n = f.size(), m = s.size();
        while(i < n && j < m) {
            if(f[i][1] >= s[j][0]) {
                res.push_back({max(f[i][0], s[j][0]), min(f[i][1], s[j][1])});

            }
            if(res.size() && res.back()[1] < res.back()[0])
                res.pop_back();
            
            
            if(f[i][1] < s[j][1]) {
                i++;
            } else {
                j++;
            }
        }
        return res;
    }
};