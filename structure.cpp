   ///build a special data type
/*struct product{
  int weight;
  double price;
};
product apple;
product banana, melon;*/
  ///we can shortly write thisway
/*  struct product {
  int weight;
  double price;
} apple, banana, melon;*/
   /// input neya,print kora
/* /// same thing
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct product{
    string name;
    int price;
}p1,p2;
void printabout(product p)
{
    cout<<p.name<<endl;
    cout<<p.price<<endl;
}
int main()
{
    p1.name="Banana"; //input
    p1.price=5;
                   //char name[20] nile input kemne nibo??
    cin>>p2.name;
    string s;
    getline(cin,s);
    (stringstream)s>> p2.price;   //or cin>>p2.price;

    printabout(p1);  printabout(p2); //output
    return 0;
}*/
  ///input neya,print kora(using pointer)
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct product{
    string name;
    int price;
};
int main()
{
    product p;     //apple
    product *ptr;
    ptr=&p;

    getline(cin,ptr->name);
    string s;
    getline(cin,s);
    (stringstream)s>> ptr->price;

    cout<<ptr->name<<" "<<ptr->price<<endl;
    return 0;
}*/
    ///nested structure
/*struct dress{
  string color;
  int price;
};

struct friends{
  string name;
  int phoneno;
  dress kamij;
} f1,f2;
friends *ptr = &f1; //nammi
f1.name
ptr->kamij.price

f2.kamij.color  //mishu
f2.kamij.price*/
  /// singly linked list build
/*#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
int main()
{
    node *ptr=new node;
    ptr-> next=0;
    ptr->data=5;  //anytime update korte pari
    cout<<ptr->data;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
struct node {
  int x;
  node *next;
};

int main()
{
  node *root= new node;
  root->next = 0;
  root->x = 12;
  node *conductor;  // This will point to each node as it traverses the list
  conductor = root; // The conductor points to the first node
  if ( conductor != 0 ) {
    while ( conductor->next != 0)
      conductor = conductor->next;
  }
  conductor->next = new node;  // Creates a node at the end of the list
  conductor = conductor->next; // Points to that node
  conductor->next = 0;         // Prevents it from going any further
  conductor->x = 42;
}*/



