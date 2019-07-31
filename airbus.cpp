#include<bits/stdc++.h>
#define pfW  printf("window\n")
#define pfA  printf("aisle\n")
#define sf2(x,ch)  scanf("%d %c",&x,&ch)
using namespace std;
int main()
{
    int r,i;
    char ch;
    while(sf2(r,ch)==2){
    if(r<3){
        if(ch=='A'||ch=='D')  pfW;  //A B C D
        else pfA;
    }
    else if(r<21){        //A B C D E F
        if(ch=='A'||ch=='F') pfW;
        else pfA;
    }
    else if(r<=65){
        if(ch=='A'||ch=='K') pfW;
        else if  (ch=='C'||ch=='D'||ch=='G'||ch=='H') pfA;
        else printf("neither\n");
    }
   }
   return 0;
}
