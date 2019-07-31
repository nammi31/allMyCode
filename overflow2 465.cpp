#include<bits/stdc++.h>
#define n 2147483647
using namespace std;
int main()
{
    char s[1000];
    while(gets(s)){
        cout<<s<<endl;
        double a,b;
        char ch;
        sscanf(s,"%lf %c %lf",&a,&ch,&b);
        if(a>n) printf("first number too big\n");
        if(b>n) printf("second number too big\n");
        if(ch=='+' && (a+b)>n) printf("result too big\n");
        if(ch=='*' && (a*b)>n) printf("result too big\n");
    }
}
