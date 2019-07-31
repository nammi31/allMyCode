/*
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct node{
int number;
node *next;
};
node *start, *END;
void traverse(node *a);
void insrt(int a);
void search(node *a, int num);
void delet(node *a , node *b, int num);
int main()
{
    start=NULL;
    END=NULL;
    insrt(1);
    insrt(3);
    insrt(8);
    traverse(start);
    printf("\n");
    delet(start, start->next,1);
    traverse(start);
    printf("\n");
    search(start,8);
  return 0;
}
void traverse(node *point)
{
    if(point != NULL)
    {
        printf("%d ",point->number);
        traverse(point->next);
    }
    return ;
}
void search(node *point,int num)
{
    if(point != NULL)
    {

        if(point->number==num)
        {
            printf("%d found!\n",num);
            return;
        }
        search(point->next,num);
    }
    if(point ==NULL)
    {
        printf("%d not found!\n",num);
    }
    return ;
}
void delet(node *point,node *point2,int num)
{
    if(point==start && point->number ==num)
    {
        start = point2;
        return;
      }
    if(point != NULL)
    {

        if(point2->number==num)
        {

            point->next = point2->next;
            return;

        }
        delet(point2,point2->next,num);
    }
    if(point ==NULL)
    {
        printf("%d not found!\n",num);
    }
    return ;
}
void insrt(int a)
{
    node *tmp= (node*)malloc(sizeof(node));
    tmp->number=a;
    tmp->next=NULL;
    if(start==END&&start==NULL)
    {
        start=END=tmp;
        return;
    }
    END->next=tmp;
    END=tmp;
    return;
}
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *ST;
void insrt(int val)
{
    node *tmp=new node();
    tmp->data=val;
    tmp->next=NULL;
    if(ST==NULL){
        ST=tmp;
        return;
    }
    else {
      node *trv=ST;
      while(trv->next!=NULL) trv=trv->next;
      trv->next=tmp;
    }
    return;
}
void insrt_first(int val)
{
    node *tmp=new node();
    tmp->data=val;
    tmp->next=ST;
    ST=tmp;
}
void insrt_loc(int val,int loc)
{
   if(loc==1) {insrt_first(val); return;}
   node *trv=ST;
   for(int i=2; i<loc; i++) trv=trv->next;
  // cout<<"data "<<trv->data<<endl;
   node *tmp=new node();
   tmp->data=val;
   tmp->next=trv->next;
   trv->next=tmp;
}
void traverse(node *ST)
{
    if(ST!=NULL){
        printf("%d ",ST->data);
        traverse(ST->next);
    }
    return;
}
void search(node *trv,int val)
{
    if(trv!=NULL){
       if(trv->data==val){
          printf("%d found.\n",val);
          return;
       }
       search(trv->next,val);
    }
    else{
      printf("%d not found.\n",val);
      return;
    }
}
void delete_last()
{
   if(ST==NULL) { printf("Empty\n"); return;}
   node *trv,*pre;
   trv=ST;
   while(trv->next!=NULL){
        pre=trv;
        trv=trv->next;
   }
    pre->next=NULL;
   return;
}
void delete_first()
{
    if(ST==NULL){ printf("Empty\n"); return;}
    ST=ST->next;
    return;
}
void delete_loc(int loc)
{
    if(ST==NULL){ printf("NULL\n"); return; }
    if(loc==1){ delete_first(); return;}
    node *trv=ST;
    for(int i=2;i<loc; i++) trv=trv->next;
    node *af=trv->next;
    trv->next=af->next;
    delete af;
}
int main()
{
    ST=NULL;
    insrt(5);
    insrt(8);
    insrt_first(100);
    insrt(10);
    insrt_loc(300,4);
    insrt(15);
    traverse(ST); cout<<endl;
    search(ST,10);
    delete_last();
    traverse(ST); cout<<endl;
    delete_first();
    traverse(ST); cout<<endl;
    delete_loc(3);
    traverse(ST); cout<<endl;
    return 0;
}
