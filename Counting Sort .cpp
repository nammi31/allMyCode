#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int a[2000005];
int main()
{
    int n;
    sf1(n);
    FOR(i,n)  sf1(a[i]);
    sort(a,a+n);
    FOR(i,n-1) pf1s(a[i]);
    pf1(a[n-1]);
    return 0;
}
