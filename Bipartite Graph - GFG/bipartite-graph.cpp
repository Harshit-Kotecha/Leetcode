//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> clr(V, -1);
	   // int curr = 1;
	    for(int i = 0; i < V; ++i) {
	        if(clr[i] == -1) {
	            if(check(i, adj, clr) == 1) {
	                return 0;
	            }
	        }
	    }
	    return 1;
	    
	}
	bool check(int node, vector<int> adj[], vector<int>& clr) {
	    
	    clr[node] = 1;
	    queue<int> q;
	    q.push(node);
	    
	    while(!q.empty()) {
	        node = q.front();
	        q.pop();
	        for(auto& it : adj[node]) {
	            if(clr[it] == -1) {
	                clr[it] = 1 - clr[node];
	                q.push(it);
	            } else if(clr[it] == clr[node]) {
	                return 1;
	            }
	        }
	    }
	    
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends