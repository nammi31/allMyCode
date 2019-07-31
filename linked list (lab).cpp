  ///Linked List Today:
/*#include<string.h>
#include<stdio.h>
struct node
{
int data;
node *next;
};
node *ST;
void insert_last(int value)
{
node *temp = new node();
temp->data=value; // cout<<temp->data<<endl;  //node creating
temp->next=NULL;
if(ST==NULL)
{
ST=temp;
return;
}
else
{
node *tm2= ST;
while(tm2->next!=NULL)
tm2=tm2->next;
tm2->next=temp;
return;
}
}
void traverse(node *ST)
{
if(ST!=NULL)
{
printf("%d ",ST->data);
traverse(ST->next);
}
}
int main()
{
ST=NULL;
insert_last(10);
insert_last(190);
insert_last(100);
insert_last(140);
traverse(ST);
return 0;
}*/
/*#include<stdio.h>
struct node{
    int data;
    node *next;
};
node *ST;
void insert_last(int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(ST==NULL) {ST=temp; return;}
    else{
       node *tm2=ST;
       while(tm2->next!=NULL) tm2=tm2->next;
       tm2->next=temp;
       return;
    }
}
void traverse(node *ST)
{
    if(ST!=NULL){
        printf("%d ",ST->data);
        traverse(ST->next);
    }
}
int main()
{
    ST=NULL;
    insert_last(90);
    insert_last(80);
    insert_last(70);
    insert_last(30);
    traverse(ST);

}
*/
#include<stdio.h>
struct node{
    int data;
    node *next;
};
node *ST;
void insert_last(int value)
{
    node *tmp=new node();
    tmp->data=value;
    tmp->next=NULL;
    if(ST==NULL){
        ST=tmp;
        return;
    }
    else{
        node *tmp2=ST;
        while(tmp2->next!=NULL) tmp2=tmp2->next;
        tmp2->next=tmp;
        return;
    }
}
void traverse(node *ST)
{
   if(ST!=NULL){
      printf("%d ",ST->data);
      traverse(ST->next);
   }
}
int main()
{
    ST=NULL;
    insert_last(12);
    insert_last(17);
    insert_last(30);
    insert_last(33);
    traverse(ST);
    return 0;
}



