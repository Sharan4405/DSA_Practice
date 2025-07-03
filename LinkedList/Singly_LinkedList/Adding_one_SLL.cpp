#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* addOne(ListNode* head) {
        if (!head) return head;

        // Step 1: Reverse the list
        head = reverse(head);

        // Step 2: Add 1 to the number
        ListNode* curr = head;
        int carry = 1;

        while (curr && carry) {
            int sum = curr->val + carry;
            curr->val = sum % 10;
            carry = sum / 10;

            if (!curr->next && carry) {
                curr->next = new ListNode(0); // Add extra node for carry
            }
            curr = curr->next;
        }

        // Step 3: Reverse the list back
        return reverse(head);
    }
};
