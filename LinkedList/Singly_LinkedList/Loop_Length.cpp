#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int loopLength(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Loop detected, now find the length
                ListNode* move = slow->next;
                int count = 1;
                while (move != slow) {
                    move = move->next;
                    count++;
                }
                return count;
            }
        }

        return 0; // No loop
    }
};
