#include<bits/stdc++.h>
#define isEmpty()  (top==-1)
#define isfull()  (top==MAXSIZE)
using namespace std;
int MAXSIZE = 8;
int stak[8];
int top = -1;
int pop() {
   int data;

   if(!isempty()) {
      data = stak[top];
      top--;
      return data;
   }
   printf("Could not retrieve data, Stack is empty.\n");
}

int push(int data) {

   if(!isfull()) {
      top++;
      stak[top] = data;
   }
   else
   printf("Could not insert data, Stack is full.\n");
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    push(i+1);
    printf("Element at top of the stack: %d\n" ,stak[top]);//peek());
    printf("Elements: \n");
    while(!isempty()) {
      int x = pop();
      printf("%d\n",x);
   }
   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");

return 0;
}

