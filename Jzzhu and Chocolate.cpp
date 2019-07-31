#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)      printf("%lld\n",x)
#define ll          long long
using namespace std;
int main()
{
    ll n,m,k,ans;
    while(sf3(n,m,k)==3){
        if(n<m) swap(n,m);
        if(k >(n+m-2)) ans=-1;
        else if(k< n-1)
            ans=max( (n/(k+1))*m, n*(m/(k+1)) );
        else ans=m/(k+2-n);
        pf1(ans);
    }
    return 0;
}
