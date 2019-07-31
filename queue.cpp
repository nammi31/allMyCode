#include<bits/stdc++.h>
#define MAX 6
#define isEmpty()  (itemCount==0)
#define isFull()   (itemCount == MAX)
using namespace std;

int intArray[MAX];
int front = 0;
int rear = 0;
int itemCount = 0;
void insert(int data)
{
    if(!isFull())
    {
        if(rear == MAX) rear = 0;
        intArray[rear++] = data;
        itemCount++;
    }
    else printf("Overflow!!\n");
}

int pop_first()
{
    int data = intArray[front++];
    if(front == MAX) front = 0;
    itemCount--;
    return data;
}

int main()
{
    /* insert 5 items */
    insert(3);
    insert(5);
    insert(9);
    insert(1);
    insert(12);
    insert(15);
    if(isFull())  printf("Queue is full!\n");
    int num = pop _first();
    printf("Element removed: %d\n",num);
    insert(16);
    insert(17);
    insert(18);
    printf("Element at front: %d\n",intArray[front]);

    printf("Queue:  ");
    while(!isEmpty())
    {
        int n = pop_first();
        printf("%d ",n);
    }
}

