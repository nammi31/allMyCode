#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define pf1(x)      printf("%lld\n",x)
#define  ll         long long int
using namespace std;
int main()
{
    ll t,n;
    sf1(t);
    while(t--)
    {
        sf1(n);
        ll sm=0;
        for(ll i=1; i<=n; i*=2) sm+=i;
        ll ans=(n*(n+1)/2)-(2*sm);
        pf1(ans);

    }
    return 0;
}
