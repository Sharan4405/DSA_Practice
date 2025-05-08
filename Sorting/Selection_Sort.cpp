#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i< n-1 ;i++){
        int min = i;
        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i] , arr[min]);
        }
    }
}
int main(){
    vector<int> arr;
    for(int i=0; i<arr.size();i++){
        cin >> arr[i];
    }
    selectionSort(arr);
    cout << "Sorted array: \n";
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}