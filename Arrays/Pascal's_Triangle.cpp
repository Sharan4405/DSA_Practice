#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows,vector<int>(numRows ,0));
            for(int i=0;i < numRows;i++){
                for(int j=0;j < i + 1;j++){
                    if(j==0 || j==i+1){
                        result[i][j] = 1;
                    }else{
                     result[i][j] = result[i-1][j] + result[i-1][j-1];
                    }
            }
            }
             for (int i = 0; i < numRows; i++) {
            result[i].resize(i + 1);
        }
            return result;
            }
};