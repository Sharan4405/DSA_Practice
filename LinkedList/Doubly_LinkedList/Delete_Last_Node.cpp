#include <bits/stdc++.h>
using namespace std;

class ListNode{
  public:
  int data;
  ListNode* next;
  ListNode* prev;

  public:
  //Constructor
  ListNode(int val,ListNode* next1,ListNode* prev1){
    data = val;
    next = next1;
    prev = prev1;
  }
  ListNode(int val){
    data = val;
    next = NULL;
    prev = NULL;
  }
};
ListNode* head = NULL;
void Delete(){
  if(head==NULL){
    return;
  }
  if(head->next == NULL) {
    delete head;
    head = NULL;
    return;
  }
  ListNode* temp1 = head;
  while(temp1->next!=NULL){
    temp1 = temp1->next;
  }
  ListNode* temp2 = temp1->prev;
  temp1->prev = temp2->next = NULL;
  delete temp1;
}