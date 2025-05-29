#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
            } else if (nums1[i] > nums2[j]) {
                if (result.empty() || result.back() != nums2[j])
                    result.push_back(nums2[j]);
                j++;
            } else {
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while (i < n) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }

        while (j < m) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};
