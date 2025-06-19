#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int misssing(vector<int>& nums,int k){
  int n = nums.size();
  for(int i=0;i<n;i++){
    if(nums[i]<=k){
        k++;
    }else{
        break;
    }
  }
  return k;
}
};
