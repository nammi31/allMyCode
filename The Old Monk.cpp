
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define ll          long long
using namespace std;
int n;
ll a[100007],b[100007];
int found(ll x)
{
    int lw=0,hi=n-1;
    while(lw<=hi)
    {
        int m=(hi+lw)/2;
        if(x<=b[m]) lw=++m;
        else  hi=--m;
    }
    return hi;
}
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
       sf1(n);
       FOR(i,n)  sf1(a[i]);
       FOR(i,n)  sf1(b[i]);
       int mx=0;
       FOR(i,n)  mx=max(mx,(found(a[i])-i));
       pf1(mx);
    }
    return 0;
}
