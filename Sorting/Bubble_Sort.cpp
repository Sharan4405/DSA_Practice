#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no swap occurred, array is already sorted
        if (!swapped) {
            break;
        }
    }
}
int main() {
    vector<int> arr;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubblesort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//Recursive Bubble Sort
// here we reduce the tie complexity for the best case , when the array is already sorted.
//it takes of O(n) of time complexity in the best case.