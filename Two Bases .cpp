#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define sf2(x,y)    scanf("%lld %lld",&x,&y)
#define pf          printf
#define FOR(i,x)    for(ll i=0;i<x;i++)
#define FORr(i,x)   for(ll i=x-1; i>=0;i--)
#define ll          long long
using namespace std;
int main()
{
    ll n,x,j;
    sf2(n,x);
    ll a[n],m,y;
    FOR(i,n)  sf1(a[i]);
    sf2(m,y);
    ll b[m];
    FOR(i,m)  {sf1(b[i]);}
    ll sm1=0; j=1;
    FORr(i,n) {  sm1+=(a[i]*j);  j*=x;}
    ll sm2=0; j=1;
    FORr(i,m) {  sm2+=(b[i]*j);  j*=y;}
    if(sm1==sm2)   pf("=\n");
    else if(sm1>sm2) pf(">\n");
    else pf("<\n");

    return 0;
}
