#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pf          printf
#define pfn         printf("\n")
#define pf1(x)      printf("%d",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    char s[105];
    sfs(s);
    int j=0,a[105];
    for(int i=0; s[i]; i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
             a[j++]=(s[i]-48);
    }
    sort(a,a+j);
    FOR(i,j){
        pf1(a[i]);
        if(i!=j-1) pf("+");
    }
    pfn;
    return 0;
}
