#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int n = grid.size();
        int m = grid[0].size();
        int original = grid[sr][sc];//original pixel
        if(original==color) return grid;//no need to change the pixel color
        queue<pair<int,int>> q;
        q.push({sr,sc});
        
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,-1,0,1};
        grid[sr][sc] = color;
        while(!q.empty()){
           int r = q.front().first;
           int c = q.front().second;
           q.pop();
           for(int i=0;i<4;i++){
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==original){
                grid[nrow][ncol]=color;
                q.push({nrow,ncol});
            }
           }
        }
        return grid;
    }
};