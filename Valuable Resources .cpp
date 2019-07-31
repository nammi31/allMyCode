/*
2
0 0
2 2

2
0 0
0 3
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define sf2(x,y)    scanf("%lld %lld",&x,&y)
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define ll          long long
using namespace std;
int main()
{
    ll n,x,x1,x2,y,y1,y2;
    sf1(n);
    sf2(x,y);
    x1=x2=x,y1=y2=y;
    FOR(i,n-1) {
       sf2(x,y);
       x1=min(x,x1);
       x2=max(x,x2);
       y1=min(y,y1);
       y2=max(y,y2);
    }
    ll r=max( y2-y1,x2-x1 );
    pf1(r*r);
    return 0;
}
