#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> pos , neg;
            for(int i=0;i < nums.size();i++){
                if(nums[i] > 0){
                    pos.push_back(nums[i]);
                }else{
                    neg.push_back(nums[i]);
                }
            }
            vector<int> result;
            for(int i=0;i< pos.size();i++){
                    result.push_back(pos[i]);
                if(i < neg.size()){
                    result.push_back(neg[i]);
                }
            }
            return result;
        }
    };