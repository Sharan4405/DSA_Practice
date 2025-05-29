#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& arr, int start, int end) {
    if (start == end) {
        for (int num : arr)
            cout << num << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(arr[start], arr[i]);              // Fix the element at index 'start'
        permute(arr, start + 1, end);          // Recurse for the remaining elements
        swap(arr[start], arr[i]);              // Backtrack
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    permute(arr, 0, arr.size() - 1);
    return 0;
}
