#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0; 
        while(left<nums.size()){
            if(left!=nums.size()-1){
            if(nums[left]==nums[left+1]){
                left+=2;
            }else{
                return nums[left];
            }
            }else{
                return nums[left];
            }
        }
        return -1;
    }
};