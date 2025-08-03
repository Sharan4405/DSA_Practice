#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int totalElements(vector<int> &nums) {
        unordered_map<int,int> freq;
        int i=0;
        int len=0;
        for(int j=0;j<nums.size();j++){
            freq[nums[j]]++;
            while(freq.size()>2){
                freq[nums[i]]--;
                if(freq[nums[i]]==0){
                    freq.erase(nums[i]);
                }
                i++;
            }
            len = max(len,j-i+1);
        }
        return len;
    }
};