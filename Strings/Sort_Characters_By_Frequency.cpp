#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        string temp;
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;

        int n = s.length();
        vector<vector<char>> bucket(n+1);
        for(auto it = freq.begin(); it != freq.end(); ++it){
            char c = it->first;
            int f = it->second;
            bucket[f].push_back(c);
        }
        
        for(int i=n;i>=1;i--){
            for(char c : bucket[i])
            temp+=string(i,c);
        }
        return temp;
    }
};
//Approach first creating hashmap and calculating the frequencies of the characters, then sortng using bucket sort.