#include <iostream>
#include <vector>
using namespace std;    
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
           int cnt = 0;
           int element;
           for(int i=0;i< nums.size() ;i++){
            if(cnt==0){
                cnt=1;
                element = nums[i];
            }
            else if(nums[i]==element){
                cnt++;
            }else{
                cnt--;
            }
           }
            return element; 
        }
        
    };

    //This is the optimal solution for the problem of finding the majority element in an array.
    //The algorithm uses the Boyer-Moore Voting Algorithm, which is a linear time(O(n)) and constant space solution.
    //the brute force solution would be O(n^2) and O(1) space complexity.
    //the better approach would be to use a hash map to store the count of each element, which would be O(n) time and O(n) space complexity.