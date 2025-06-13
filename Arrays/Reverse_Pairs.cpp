#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int cnt = 0;

void merge(vector<int>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    long temp1[n1], temp2[n2];
    for(int i = 0; i < n1; i++){
        temp1[i] = arr[left + i]; 
    }
    for(int i = 0; i < n2; i++){
        temp2[i] = arr[mid + 1 + i];
    }

    long it2 = 0;
    long it1 = 0;
    while(it2 < n2 && it1 < n1){
        if(temp1[it1] > 2 * temp2[it2]){
            cnt += n1 - it1;
            it2++;
        } else {
            it1++;
        }
    }
    int l = 0, r = 0;
    while(l < n1 && r < n2){
        if(temp1[l] < temp2[r]){
            arr[left] = temp1[l];
            l++; left++;
        } 
        else if(temp1[l] >= temp2[r]){
            arr[left] = temp2[r];
            r++; left++;
        }
    }

    while(l < n1){
        arr[left] = temp1[l++];
        left++;
    }
    while(r < n2){
        arr[left] = temp2[r++];
        left++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if(left == right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return cnt;
    }
};