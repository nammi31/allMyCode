#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%lld %d",&x,&y)
#define pf1(x)      printf("%lld\n",x)
#define pfi(x)      printf("%d\n",x)
#define pf          printf
#define  ll         long long
using namespace std;
int main()
{
    ll n;
    int k;
    while(sf2(n,k)==2)
    {
        vector<int>v;
        for(ll i=1; i*i<=n; i++){
            if(n%i==0) v.push_back(i);
        }
        int j=v.size();
        if(k<=j)  pfi(v[k-1]);
        else{
          int sz=2*j-((ll)v[j-1]*v[j-1]==n);
          if(k>sz)  pf("-1\n");
          else pf1(n/v[sz-k]);
        }
    }
    return 0;
}
/*
4 2
5 3
12 5
*/
