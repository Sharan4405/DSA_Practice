#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
    visited[node] = true;
    for(auto& neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adj,visited);
        }
    }
}

void bfs(int start,vector<vector<int>>& adj,vector<bool>& visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto& x: adj[node]){
           if(!visited[x]){
           visited[x] = true;
           q.push(x);
           }
        }
    }
}