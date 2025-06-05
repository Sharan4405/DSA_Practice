#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int total = n + m;
        int medianIdx = total / 2;
        
        int i = 0, j = 0, count = 0;
        int curr = 0, prev = 0;

        while (count <= medianIdx) {
            prev = curr;
            if (i < n && (j >= m || nums1[i] <= nums2[j])) {
                curr = nums1[i++];
            } else {
                curr = nums2[j++];
            }
            count++;
        }

        if (total % 2 == 0) {
            return (prev + curr) / 2.0;
        } else {
            return curr;
        }
    }
};
