#include<bits/stdc++.h>
#define sf1(x)     scanf("%lld",&x)
#define sf2(x,y)   scanf("%lld %lld",&x,&y)
#define ll         long long int
#define FOR(i,x)   for(ll i=0;i<x;i++)
#define pf1(x)     printf("%lld\n",x)
using namespace std;
 int main()
 {
     ll n,m,a,sm;
     while(sf2(n,m)==2)
     {
         sm=(n*(n+1))/2;
         FOR(i,m){
              sf1(a);
              sm-=a;
         }
        pf1(sm);
     }
     return 0;
 }


