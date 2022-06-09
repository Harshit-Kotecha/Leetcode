class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        unordered_map<int, vector<int>> m;
        for(auto i : edges) {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        vector<bool> vis(n);
        vis[s] = 1;
        queue<int> q;
        q.push(s);
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            for(auto i : m[curr]) {
                if(vis[i] == false) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
            if(vis[d] == 1) return 1;
        }
        return vis[d];
    }
};