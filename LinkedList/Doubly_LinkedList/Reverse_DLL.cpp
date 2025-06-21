#include <bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   Node* prev;
   Node* next;
   Node(int x) : data(x) , prev(NULL) , next(NULL) {}
};
Node* reverseDLL(Node* head){
   Node* prev1 = NULL;
   Node* curr = head;
   while(curr!=NULL){
    //Swapping of both prev and next pointers is done
    prev1 = curr->prev;
    curr->prev = curr->next;
    curr->next = prev1;
    //moving to the next node , but after swapping the prev is the new next
    curr = curr->prev;
   }
   if(prev1!=NULL){
    prev1 = prev1->prev;
   }
   return prev1;
}
int main(){
    vector<int> arr = {1,2,3};
    Node* head = NULL;
}