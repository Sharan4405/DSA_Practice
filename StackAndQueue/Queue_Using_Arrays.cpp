#include <bits/stdc++.h>
using namespace std;
//in queue we follow circular pattern , as if one element at the start is being popped so isaed of all th elements shifting one step , so we increase the start pointer
class Queue{
   int *arr;
   int start,end,currsize,maxsize;
   public:
   Queue(){
    arr = new int[16];
    start = -1;
    end = -1;
    currsize = 0;
    maxsize = 16;
   }
   void push(int x){
     if(currsize==maxsize){
        exit(1);
     }
     if(end == -1){
        start = 0;
        end = 0;
     }else {
        end =  (end+1)%maxsize;//what if we first position's element has been deleted and start has been moved front and the max size is just one ahead of curr size 
        arr[end] = x;
        currsize++;
     }
   }
   int pop(){
    if(start == -1){
        exit(1);//exit 0 is normal termination and exit 1 is abnormal termination , exit 1 indicates an error and stop the program. 
    }
    int el = arr[start];
    if(currsize == 1){
       start = -1;
       end = -1;
    }else{
        start = (start+1)%maxsize;
        currsize--;
    }
    return el;
   }
   int top(){
    if(start==-1){
        exit(1);
    }
    return arr[start];
   }
   int size(){
    return currsize;
   }
};