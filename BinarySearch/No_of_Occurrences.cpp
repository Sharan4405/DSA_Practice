#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0,high = n-1;
        vector<int> result = {-1,-1};
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]>=target){
                high = mid - 1;
                if(nums[mid]==target){
                result[0] = mid;
                }
            }else{
                low = mid + 1;
            }
        }
        low =0,high = n -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<=target){
                low = mid + 1;
                if(nums[mid]==target){
                result[1] = mid;
                }
            }else{
                high = mid - 1;
            }
        }
        if (result[0] == -1 || result[1] == -1) {
            return -1;  // If the target was not found
        }

        return result[1] - result[0] + 1;
    }
};