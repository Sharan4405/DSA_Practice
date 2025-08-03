#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int maxlen = 0;
        int i=0;
            unordered_set<int> set;
            for(int j=0;j<s.size();j++){
                if(set.find(s[j])!=set.end()){
                   while(i<j && set.find(s[j])!=set.end()){
                    set.erase(s[i]);
                    i++;
                   }
                }
                set.insert(s[j]);
                maxlen = max(maxlen,j-i+1);
            }
        
        return maxlen;
    }
};