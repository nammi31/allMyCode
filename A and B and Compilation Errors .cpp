#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf2(x,y)    printf("%d\n%d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int ans1=0,ans2=0;
    int a[n],b[n],c[n];
    FOR(i,n)  { sf1(a[i]);  ans1^=a[i];}
    FOR(i,n-1){ sf1(b[i]);  ans1^=b[i],ans2^=b[i];}
    FOR(i,n-2){ sf1(c[i]);  ans2^=c[i];}
    pf2(ans1,ans2);
    return 0;
}
/*
5
1 5 8 123 7
123 7 5 1
5 1 7
*/
