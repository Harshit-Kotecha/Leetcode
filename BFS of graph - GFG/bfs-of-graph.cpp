// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> res;
        vector<bool> vis(V+1, false);
        queue<int> q;
        q.push(0);
        //res.push_back(0);
        while(!q.empty()) {
            int n = q.front();
            q.pop();
            // if(vis[n] == false) {
                res.push_back(n);
                vis[n] = true;
            // }
                for(int i : adj[n]) {
                    if(vis[i] == false) {
                        q.push(i);
                        //res.push_back(i);
                        vis[i] = true;
                    }
                }
            
            
        }
        return res;
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends