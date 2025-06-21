#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int data;
     ListNode *next;
    ListNode(int x) : data(x), next(NULL) {}
 };
 ListNode* head = NULL;
 
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
