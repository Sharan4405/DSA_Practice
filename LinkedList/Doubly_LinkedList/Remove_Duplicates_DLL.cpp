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
    ListNode * removeDuplicates(ListNode *head) {
        if(!head) return NULL;
       ListNode* temp = head;
       while(temp!=NULL && temp->next!=NULL){
        if(temp->val==temp->next->val){
            ListNode* del = temp->next;
            ListNode* nextnode = del->next;
            temp->next = nextnode;
            if(nextnode) nextnode->prev = temp;
            delete del;
        }else{
            temp = temp->next;
        }
       }
        return head;
    }
};