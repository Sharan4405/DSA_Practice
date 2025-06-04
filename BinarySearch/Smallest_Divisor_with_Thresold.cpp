#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int total = 0;

            for (int num : nums) {
                total += ceil((double)num / mid);
            }

            if (total > threshold) {
                left = mid + 1;  // increase divisor
            } else {
                ans = mid;       // possible answer
                right = mid - 1; // try smaller
            }
        }

        return ans;
    }
};
