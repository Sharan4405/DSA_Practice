#include<bits/stdc++.h>
using namespace std;
//Provinces - no of Groups of connected nodes
class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
        visited[node]=true;
        for(auto& x : adj[node]){
            if(!visited[x]){
                dfs(x,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adj(V+1);
        for(int i=1;i<=V;i++){
            for(int j=1;j<=V;j++){
                  if(isConnected[i-1][j-1]!=0){
                    adj[i].push_back(j);
                  }
            }
        }
        int count = 0;
        vector<bool> visited(V+1,false);
        for(int i=1;i<=V;i++){
            if(!visited[i]){
            dfs(i,adj,visited);
            count++;
        }
        }
        return count;
    }
};