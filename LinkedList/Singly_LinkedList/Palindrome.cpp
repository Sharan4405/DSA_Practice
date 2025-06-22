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
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        int len = length(head)/2;
        ListNode* tail = head;
        while(len>0){
            tail = tail->next;
            len--;
        }
        int len2 = length(head)/2;
        ListNode* end = Reverse(tail);        
        while(len2>0){
            if(start->val == end->val){
                start = start->next;
                end = end->next;
                len2--;
            }else{
                return false;
            }
        }
        return true;
    }
    ListNode* Reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }
 int length(ListNode* head){
   int count=0;
   while(head!=NULL){
      count++;
      head=head->next;
   }
   return count;
 }
};