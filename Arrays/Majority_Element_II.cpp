#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        int major = n/3;
        int el1,el2;
        int c1=0 , c2=0;
        for(int i=0;i<n;i++){
          if(c1==0 && nums[i]!=el2){
            c1 = 1;
            el1 = nums[i];
          }
          else if(c2==0 && nums[i]!=el1){
            c2 = 1;
            el2 = nums[i];
          }
          else if(nums[i]==el1){
            c1++;
          }
          else if(nums[i]==el2){
            c2++;
          }
          else{
            c1--;
            c2--;
          }
        }
        vector<int> r;
        c1 = c2 = 0;
        for (int num : nums) {
            if (num == el1) c1++;
            else if (num == el2) c2++;
        }
        if(c1 > major){
        r.push_back(el1);
        }
        if(c2 > major){
        r.push_back(el2);
        }
        return r;
    }
};