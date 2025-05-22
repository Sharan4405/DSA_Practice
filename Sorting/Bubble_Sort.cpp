#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    vector<int> arr;
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    bubblesort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//Recursive Bubble Sort
// here we reduce the tie complexity for the best case , when the array is already sorted.
//it takes of O(n) of time complexity in the best case.