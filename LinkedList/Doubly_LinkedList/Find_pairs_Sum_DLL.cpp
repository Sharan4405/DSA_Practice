#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int x) : val(x), prev(NULL), next(NULL) {}
};

class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
       ListNode* front = head;
       ListNode* back = front;
       vector<vector<int>> result;
       while(back->next!=NULL){
        back = back->next;
       }
       while(front!=back){
        int sum = front->val + back->val;
        if(sum == target){
            result.push_back({front->val,back->val});
            front = front->next;
            back = back->prev;
        }else if(sum < target){
            front = front->next;
        }else{
            back = back->prev;
        }
       }
       return result;
    }
};