#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool dfs(int node,int parent,vector<vector<int>>& adj,vector<bool>& visited){
        visited[node]=true;
        for(auto& x : adj[node]){
            if(!visited[x]){
                visited[x]=true;
                if(dfs(x,node,adj,visited)) return true;
            }else{
                if(x != parent) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool iscycle = false;
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                iscycle = dfs(i,i,adj,visited);
                if(iscycle) return true;
            }
        }
        return false;
    }
};