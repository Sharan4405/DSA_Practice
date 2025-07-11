#include <bits/stdc++.h>
using namespace std;
//Not completely optimised 
class Solution {
public:
    string largestOddNumber(string num) {
        if(num.empty()) return "";
        string result= num;
        int count=0;
        for(int i=num.length() - 1;i>=0;i--){
            int nums = num[i] - '0';
           if(nums%2!=0){
              result.erase(i+1,count);
              count=0;
              return result;
           }
           else{
             count++;
           }
        }
        if(count==result.length()){
            return "";
        }
        return result;
    }
};    
//more efficient thn the above code , as we are performing bit-wise manipulation 

class Solution {
public:
    string largestOddNumber(string& num) {
        for (int i = num.size() - 1; i >= 0; --i) {
            if ((num[i] & 1) != 0) {  // bitwise check for odd digit
                num.resize(i + 1);   // in-place cut to odd-ending prefix
                return num;
            }
        }
        return "";
    }
};
