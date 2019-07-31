#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,x)    for(ll i=0;i<x;i++)
#define FOR1(i,x)   for(ll i=1;i<x-1;i++)
#define ll          long long int
using namespace std;
int main()
{
    ll n;
    while(sf1(n)==1){
        ll a[n],sm=0;
        FOR(i,n){ sf1(a[i]); sm+=a[i]; }
        sort(a,a+n);
        ll ans=3*sm-a[0]-a[n-1];
        FOR1(i,n) { a[i]+=a[i-1]; ans+=(sm-a[i]);}
        pf1(ans);
    }
    return 0;
}
