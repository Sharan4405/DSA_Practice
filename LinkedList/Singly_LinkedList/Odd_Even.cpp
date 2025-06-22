#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head; // edge case: 0 or 1 node
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  // to connect at the end
        ListNode* temp = head->next->next;
        int index = 3;

        while (temp != NULL) {
            if (index % 2 == 1) { // odd index
                odd->next = temp;
                odd = odd->next;
            } else {              // even index
                even->next = temp;
                even = even->next;
            }
            temp = temp->next;
            index++;
        }

        odd->next = evenHead;
        even->next = NULL;  // very important to avoid cycle

        return head;
    }
};
