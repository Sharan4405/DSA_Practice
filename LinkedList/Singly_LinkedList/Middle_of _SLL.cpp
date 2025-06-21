#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = lengthLL(head)/2;
        ListNode* curr = head;
        while(length!=0){
           curr = curr->next;
           length--;
        }
        return curr;
    }
    int lengthLL(ListNode* head){
        int count = 0;
        while(head!=NULL){
           count++;
           head = head->next;
        }
        return count;
    }
};