#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string result,temp;
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                if(!temp.empty()){
                if(result.empty()){
                   result=temp;
                }else{
                    result = temp + " " + result;
                }
                temp.clear();
                }
            }else{
                temp+=s[i];
            }
        }
        return result;
    }
};