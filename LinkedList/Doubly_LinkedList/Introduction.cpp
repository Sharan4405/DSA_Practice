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