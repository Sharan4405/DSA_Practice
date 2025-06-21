#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // Cycle detected
            if (slow == fast) {
                ListNode* entry = head;
                while (entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry;  // Starting point of the cycle
            }
        }
        return NULL; // No cycle
    }
};
