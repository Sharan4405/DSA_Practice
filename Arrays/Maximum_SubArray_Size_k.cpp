#include <bits/stdc++.h>
using namespace std;

class solution {
   public:
   int maxSubArray(vector<int> num,int k){
    if(num.size() < k) return -1;
    int sum = 0;
    int start = 0;
    int tempsum = 0;
      for(int i=0;i<num.size();i++){
        tempsum+=num[i];
        if(i>=k-1){
          sum = max(sum,tempsum);
          sum-=num[start];
          start++;
        }
      }
      return sum;
   }
};