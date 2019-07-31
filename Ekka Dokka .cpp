#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfL(x)      scanf("%lld",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define  ll        long long
using namespace std;
int main()
{
    int t,k=1;
    sf1(t);
    ll w;
    while(t--){
      sfL(w);
      pcase(k++);
      if(w&1) { pf("Impossible\n"); continue;}
      ll p,n=w;
      while(1){
        p = n/2;
        if(p&1) break;
        n/=2;
      }
      pf2(p,w/p);
    }
    return 0;
}
/*
3
10
5
12

Case 1: 5 2
Case 2: Impossible
Case 3: 3 4
*/
