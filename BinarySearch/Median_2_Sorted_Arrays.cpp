#include <bits/stdc++.h>
using namespace std;
class Solution{
   public:
   int MedianSorted(vector<int>& nums1,vector<int>& nums2,int k){
    int left = 0,right=0;
    vector<int> result;
    while(left<nums1.size() && right<nums2.size()){
        if(nums1[left]==nums2[right]){
            result.push_back(nums1[left++]);
            result.push_back(nums2[right++]);
        }else if(nums1[left] < nums2[right]){
            result.push_back(nums1[left++]);
        }else{
            result.push_back(nums2[right++]);
        }
    }
    while(left<nums1.size()){
        result.push_back(nums1[left++]);
    }
    while(right<nums2.size()){
        result.push_back(nums2[right++]);
    }
    return result[k-1];
   }
};
