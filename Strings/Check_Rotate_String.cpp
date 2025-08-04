#include <bits/stdc++.h>
using namespace std;
//O(n^2) Time Complexity , Brute force method
class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s;
        for(int i=0;i<s.length();i++){
            char t = temp[0];
            temp.erase(temp.begin());//Due to erase of first element , all the elements gets shifted to left , due to this te time complexity gets to increase from O(n) to O(n^2)
            temp.push_back(t);
            if(temp==goal) return true;
        }
        return false;
    }
};
//O(n) Time complexity , Optimised approach 
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() == goal.length() && (s + s).find(goal) != string::npos) return true;
        return false;
    }
};
