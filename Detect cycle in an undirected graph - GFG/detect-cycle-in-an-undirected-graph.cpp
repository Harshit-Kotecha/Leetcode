//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V] = {};
        
        for(int i = 0; i < V; i++) {
            if(vis[i] == 0) {
                if(check(vis, i, adj, -1) == 1) return 1;
            }
        }
        
        return 0;
    }
    bool check(bool *vis, int n, vector<int> *adj, int par) {
        vis[n] = 1;
        
        for(auto& i : adj[n]) {
            if(vis[i] == 0) {
                if(check(vis, i, adj, n) == 1) return 1;
            } else if(i != par) return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
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
}
// } Driver Code Ends