#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%lld\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define  ll         long long
using namespace std;
int main()
{
    int n,a[200003];
    while(sf1(n)==1){
        FOR1(i,n) sf1(a[i]);
        ll ans=0;
        FOR1(i,n)
           if(a[i]!=a[i-1]) ans+=(ll)(abs(a[i-1]-a[i]));
        pf1(ans);

    }
    return 0;
}
/*
5
1 2 3 4 5

4
1 2 2 1
*/
