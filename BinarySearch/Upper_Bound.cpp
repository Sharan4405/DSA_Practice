#include <iostream>
#include <vector>
using namespace std;

int upperBound(const vector<int> &arr, int x) {
    size_t low = 0, high = arr.size();
    size_t ans = arr.size();

    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return static_cast<int>(ans);
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int x = 9;
    int ind = upperBound(arr, x);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}