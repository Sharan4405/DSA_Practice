#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       
        int len = 0;
        int maxzero = 0;
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==0) maxzero++;
            if(maxzero>k){
                if(nums[i]==0) maxzero--;
                i++;
            }else{
                len = max(len,j-i+1);
            }
            j++;      
        }
        return len;
    }
};