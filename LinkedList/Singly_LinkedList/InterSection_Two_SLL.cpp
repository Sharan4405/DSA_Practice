#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* slow1 = headA;
        ListNode* slow2 = headB;
        if(slow1==NULL || slow2==NULL) return NULL;
        while(slow1!=slow2){
           if(slow1==NULL){
             slow1 = headB; 
           }else{
            slow1 = slow1->next;
           }
           if(slow2==NULL){
             slow2 = headA; 
           }else{
            slow2 = slow2->next;
           }
        }
        return slow1;
    }
};