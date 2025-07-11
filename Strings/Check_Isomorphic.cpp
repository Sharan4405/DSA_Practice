#include <bits/stdc++.h>
using namespace std;

class solution {
   bool isIsomorphic(string s,string t){
    if(s.length()!=t.length()) return false;
    int mapS[256] = {0}; //ASCII values size
    int mapT[256] = {0};
    for(int i=0;i<s.length();i++){
       if(mapS[t[i]]!=mapT[s[i]]) return false;
       mapS[t[i]] = i + 1;
       mapT[s[i]] = i + 1;
    }
    return true;
   }
};