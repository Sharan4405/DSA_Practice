#include <bits/stdc++.h>
using namespace std;
class Node {
 public:
 int data;
 Node* next;
 public:
 Node(int val,Node* next1){
    data = val;
    next=next1;
 }
 Node(int val){
    data = val;
    next= NULL;
 }
};
int main(){
    vector<int> arr = {2,3,4,5};
    Node* node1 = new Node(arr[0]);
    // cout << node1; // Removed: printing pointer directly is not meaningful
    cout << node1->data << endl;
    cout << "hello world";
}