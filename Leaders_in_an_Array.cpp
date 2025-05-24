#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n = nums.size();
      vector<int> result;
      int max = nums[n-1];
      result.push_back(max);
      for(int i=n-2;i>=0;i--){
         if(nums[i] > max){
            result.push_back(nums[i]);
            max = nums[i];
         }
      }
      return result;
    }
};