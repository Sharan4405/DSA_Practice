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
    ListNode* deleteOccurances(ListNode* head, int target) {
        // Remove matching nodes at the start
        while (head && head->val == target) {
            ListNode* del = head;
            head = head->next;
            if (head) head->prev = NULL;
            delete del;
        }
        if (!head) return NULL;

        ListNode* temp = head;
        while (temp) {
            if (temp->val == target) {
                ListNode* del = temp;
                ListNode* prevNode = temp->prev;
                ListNode* nextNode = temp->next;

                if (prevNode) prevNode->next = nextNode;
                if (nextNode) nextNode->prev = prevNode;

                temp = nextNode;
                delete del;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
