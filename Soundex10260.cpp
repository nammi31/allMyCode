#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[22];
    while(cin>>s){
        int a=0,i,store[30];
        char ch;
        for(i=0; s[i]; i++){
          ch=s[i];
          if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='H'||ch=='W'||ch=='Y')
                store[a++]=0;
          else if(ch=='B'||ch=='F'||ch=='P'||ch=='V')
                store[a++]=1;
          else if(ch=='C'||ch=='G'||ch=='J'||ch=='K'||ch=='Q'||ch=='S'||ch=='X'||ch=='Z')
                store[a++]=2;
          else if(ch=='D'||ch=='T')
                store[a++]=3;
          else if(ch=='L')
                store[a++]=4;
          else if(ch=='M'||ch=='N')
                store[a++]=5;
          else if(ch=='R')
                store[a++]=6;
        }
        for(i=0;i<a;i++)
            if(store[i]>0 && store[i-1]!=store[i] )
                cout<<store[i];
        cout<<endl;
    }
    return 0;
}
