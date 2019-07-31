#include<bits/stdc++.h>
#define n 2147483647
using namespace std;
int main()
{
    char s1[1000],s2[1000];
    char ch;
    double a,b;
    while(cin>>s1>>ch>>s2){
        a=atof(s1);
        b=atof(s2);
        cout<<s1<<" "<<ch<<" "<<s2<<endl;
        if(a>n) printf("first number too big\n");
        if(b>n) printf("second number too big\n");
        if(ch=='+' && (a+b)>n) printf("result too big\n");
        if(ch=='*' && (a*b)>n) printf("result too big\n");
    }
    return 0;
}
