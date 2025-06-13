#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            int tempMax = max({num, currMax * num, currMin * num});
            currMin = min({num, currMax * num, currMin * num});
            currMax = tempMax;
            result = max(result, currMax);
        }

        return result;
    }
};
