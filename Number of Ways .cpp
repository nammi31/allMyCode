#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR1(i,x)   for(ll i=1;i<=x;i++)
#define ll         long long
using namespace std;
int main()
{
    ll n;
    while(sf1(n)==1){
      ll a[n];
      a[0]=0;
      FOR1(i,n){
        sf1(a[i]);
        a[i]+=a[i-1];
      }
      ll way[2]={0};
      way[1]=0;
      if(n>=3 && a[n]%3==0){
        ll avg=a[n]/3;
        FOR1(i,n){
           if(a[i]==2*avg) way[1]+=way[0];
           if(a[i]==avg)  way[0]++;
        }
        if(avg==0)  way[1]-=(way[0]-1);
      }
      pf1(way[1]);
    }
    return 0;
}
/*
5
1 2 3 0 3
4
0 1 -1 0
2
4 1
*/
