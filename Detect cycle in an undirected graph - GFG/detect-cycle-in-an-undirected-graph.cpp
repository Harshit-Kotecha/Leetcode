// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V, false);
        for(int i = 0; i < V; i++) {
            if(vis[i] == false) {
                //vis[i] = true;
                if(cycle(adj, vis, i) == true) return 1;
            }
        }
        
        return 0;
    }
    bool cycle(vector<int> adj[], vector<bool>& vis, int n) {
        
        queue<pair<int, int>> q;
        
        vis[n] = true;
        q.push({n, -1});
        
        while(!q.empty()) {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            
            for(int i : adj[node]) {
                if(vis[i] == false) {
                    vis[i] = true;
                    q.push({i, node});
                } else {
                    if(i != par) return 1;
                }
            }
        }
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends