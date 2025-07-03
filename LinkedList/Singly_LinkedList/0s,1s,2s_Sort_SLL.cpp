#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x) , next(NULL) {}
};

ListNode* zeroonetwoSort(ListNode* head){
    if(!head || !head->next) return head;
    ListNode *dummyzero = new ListNode(-1) , *dummyone = new ListNode(-1) , *dummytwo = new ListNode(-1);
    ListNode* zero = dummyzero , *one = dummyone , *two = dummytwo;
    ListNode* curr = head;
    while(curr){
        if(curr->val==0){
           zero->next = curr;
           zero = curr;
        }
        else if(curr->val==1){
           one->next = curr;
           one = curr;
        }else if(curr->val==2){
           two->next = curr;
           two = curr;
        }
        curr = curr->next;
    }
    zero->next = dummyone->next ? dummyone->next : dummytwo->next;
    one->next = dummytwo->next;
    two->next = NULL;
    ListNode* result = dummyzero->next;
    delete dummyzero;
    delete dummyone;
    delete dummytwo;

    return result;
}