#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumIndex;
    int maxLength = 0, currentSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];

        if (currentSum == k)
            maxLength = i + 1;

        if (prefixSumIndex.find(currentSum - k) != prefixSumIndex.end())
            maxLength = max(maxLength, i - prefixSumIndex[currentSum - k]);

        if (prefixSumIndex.find(currentSum) == prefixSumIndex.end())
            prefixSumIndex[currentSum] = i;
    }

    return maxLength;
}

};
