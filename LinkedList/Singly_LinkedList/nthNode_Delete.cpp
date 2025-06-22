#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
//Method 1 using the reverse the linkedlist logic 
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head) return nullptr;

    ListNode* newhead = Reverse(head);
    ListNode* curr = newhead;

    if (n == 1) {
        newhead = newhead->next;
    } else {
        int count = 1;
        while (curr && curr->next) {
            if (count == n - 1) {
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
            count++;
        }
    }

    return Reverse(newhead);
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


//Method 2 using th length of the likedlist to find
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len = 0;
    ListNode* temp = head;
    // Step 1: Get length of list
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    // Step 2: If removing the first node
    if (n == len) {
        return head->next;
    }
    // Step 3: Go to (len - n - 1)-th node
    temp = head;
    for (int i = 1; i < len - n; i++) {
        temp = temp->next;
    }
    // Step 4: Remove the nth node from end
    temp->next = temp->next->next;
    return head;
}