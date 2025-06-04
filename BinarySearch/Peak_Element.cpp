#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        while(left+1<=nums.size()){
           if(left!=nums.size()-1 && nums[left]<=nums[left+1]){
            left++;
           }else{
            return left;
           }
        }
        
        return -1;
    }
};