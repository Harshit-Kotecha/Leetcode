class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> s;
        unordered_map<int, int> m;
        for(auto& x : matches) {
            s.insert(x[0]);
            s.insert(x[1]);
            m[x[1]]++;
        }
        vector<int> r1, r2;
        for(auto& i : s) {
            if(m[i] == 1) {
                r2.push_back(i);
            } else if(m[i] == 0) {
                r1.push_back(i);
            }
            
        }
        return {r1, r2};
    }
};