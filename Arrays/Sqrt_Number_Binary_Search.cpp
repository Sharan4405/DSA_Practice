#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int SquareRoot(int k) {
        if (k == 0 || k == 1)
            return k;
        int low = 1, high = k, ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= k / mid) { // To avoid overflow: mid*mid <= k
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};