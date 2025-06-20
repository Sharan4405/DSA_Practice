#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val, Node* next1) {
        data = val;
        next = next1;
    }

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a node at the beginning
Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

// Utility function to print the list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> arr = {2, 3, 4, 5};

    Node* head = NULL;

    for (int i = 0; i < arr.size(); ++i) {
        head = insert(head, arr[i]);
    }

    printList(head);
    return 0;
}
