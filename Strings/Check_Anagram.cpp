#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int MapS[256] = {0};
        for(int i=0;i<s.length();i++){
            MapS[s[i]]++;
            MapS[t[i]]--;
        }
        for(int i=0;i<t.length();i++){
            if(MapS[t[i]]!=0) return false;
        }
        return true;
    }
};