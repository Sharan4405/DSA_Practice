#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

 int length(ListNode* head){
   int count=0;
   while(head!=NULL){
      count++;
      head=head->next;
   }
   return count;
 }
