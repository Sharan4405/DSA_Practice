#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is the target
            if (arr[mid] == target) {
                return true;
            }
            if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
                low++;  // Move low pointer to the right
                high--; // Move high pointer to the left
            }
            // Left half is sorted
            else if (arr[low] <= arr[mid]) {
                // Check if target is in the left half
                if (target >= arr[low] && target < arr[mid]) {
                    high = mid - 1;  // Target lies in the left half
                } else {
                    low = mid + 1;  // Target lies in the right half
                }
            }
            // Right half is sorted
            else {
                // Check if target is in the right half
                if (target > arr[mid] && target <= arr[high]) {
                    low = mid + 1;  // Target lies in the right half
                } else {
                    high = mid - 1;  // Target lies in the left half
                }
            }
        }
        
        return false;  // Target not found
    }
};
