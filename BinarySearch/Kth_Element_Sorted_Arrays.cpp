#include <bits/stdc++.h>
using namespace std;
class Solution{
   public:
   int MedianSorted(vector<int>& nums1,vector<int>& nums2,int k){
    int left = 0,right=0;
    int count=0,el=0;
    while(count<k){
        if(left<nums1.size() && (right>=nums2.size() || nums1[left] < nums2[right])){
            el = nums1[left++];
        }else{
            el = nums2[right++];
        }
        count++;
    }
    return el;
   }
};
