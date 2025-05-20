#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> prefixsum;
        int sum = 0;
        int count =0;
        prefixsum[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(prefixsum.find(sum - k)!=prefixsum.end()){
                    count+=prefixsum[sum - k];
            }
            prefixsum[sum]++;
        }
        return count;
    }
};