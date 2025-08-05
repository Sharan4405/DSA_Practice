#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
  void dfs(int node,vector<vector<int>> adj,vector<bool>& visited){
    visited[node] = true;
    for(auto& x : adj[node]){
        if(!visited[x]){
            dfs(x,adj,visited);
        }
    }
  }
  int connected(int V,vector<vector<int>>& edges){
    vector<vector<int>> adj(V);//adjacency list
    for(auto& edge : edges){
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            count++;
        }
    }
    return count;
  }
};