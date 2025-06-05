#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long totalHours(const vector<int>& piles, int k) {
        long long hours = 0;
        for (int pile : piles) {
            // Equivalent to ceil(pile / k)
            hours += (pile + k - 1) / k;
        }
        return hours;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (totalHours(piles, mid) <= h) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
