class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        unordered_map<int, vector<int>> m;
        for(auto& i : edges) {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        vector<bool> vis(n);
        vis[s] = 1;
        for(int i : m[s]) {
            if(vis[i] == 0) {
                dfs(i, m, vis);
            }
            if(vis[d] == 1) return 1;
        }
        return vis[d];
        
    }
    void dfs(int i, unordered_map<int, vector<int>>& m, vector<bool>& vis) {
        vis[i] = 1;
        
        for(int n : m[i]) {
            if(vis[n] == 0) {
                //vis[n] = 1;
                dfs(n, m, vis);
            }
        }
        
    }
};