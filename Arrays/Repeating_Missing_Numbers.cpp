#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeating(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2); // [repeating, missing]
        sort(nums.begin(), nums.end());

        int expected = 1;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                result[0] = nums[i]; // Repeating
            } else if (nums[i] != expected) {
                result[1] = expected; // Missing
                expected++; // skip this one, then continue
            } else {
                expected++;
            }
        }

        // Handle case when missing number is n
        if (result[1] == 0) result[1] = n;

        return result;
    }
};
