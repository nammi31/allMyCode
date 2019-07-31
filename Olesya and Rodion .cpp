#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pfn         printf("\n")
#define pf1(x)      printf("%d",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,t;
    sf2(n,t);
    if(n==1 && t==10) {pf("-1\n");return 0;}
    if(t==10) n--;
    pf1(t);
    FOR(i,n-1) pf("0");
    pfn;
    return 0;
}
