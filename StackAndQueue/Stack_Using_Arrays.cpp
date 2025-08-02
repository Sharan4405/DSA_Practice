#include <bits/stdc++.h>
using namespace std;
class MyStack {
    queue<int> q1, q2;

public:
    MyStack() {}

    void push(int x) {
        q1.push(x);
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);  // q2 becomes the main queue
    }

    int pop() {
        if (q2.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        int val = q2.front();
        q2.pop();
        return val;
    }

    int top() {
        if (q2.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q2.front();
    }

    bool empty() {
        return q2.empty();  // Directly check
    }
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */