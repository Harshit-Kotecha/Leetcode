class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> m;
        for(auto& x : logs) {
            m[x[0]].insert(x[1]);
        }
        vector<int> res(k);
        for(auto& x : m) {
            res[x.second.size() - 1]++;
        }
        
        return res;
    }
};