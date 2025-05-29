#include <bits/stdc++.h>
using namespace std;

class Solution{
int maxLenZeroSumSubarray(vector<int>& nums){
    int n = nums.size();
    int sum=0;
    int maxlen=0;
    unordered_map<int,int> prefixsum;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            maxlen = i+1;
        }else if(prefixsum.count(sum)){
            maxlen = max(maxlen , i - prefixsum[sum]);
        }else{
            prefixsum[sum] = i;
        }
    }
    return maxlen;
}
};