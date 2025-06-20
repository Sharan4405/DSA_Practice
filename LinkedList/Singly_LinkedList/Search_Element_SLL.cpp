#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int data;
     ListNode *next;
    ListNode(int x) : data(x), next(NULL) {}
 };
 ListNode* head = NULL;
 bool Search(ListNode* node){
    while(head!=NULL){
       if(head->data==node->data){
         return true;
       }
       head=head->next;
    }
    return false;
 }
