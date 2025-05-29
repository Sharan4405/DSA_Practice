#include <bits/stdc++.h>
using namespace std;

//1st method: Using lowerBound and upperBound functions
class Solution {
public:
    int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
int upperBound(const vector<int> &arr, int x) {
    int low = 0, high = arr.size();
    int ans = arr.size();

    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0, high = n - 1;
        int first = lowerBound(nums,n,target);
        int last = upperBound(nums,target);
        vector<int> result = {first,last};
        if(first==n || nums[first]!=target){
            return {-1,-1};
        }
        return {first , last - 1};
    }
};

//2nd method: Using binary search
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
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
        return result;
    }
};