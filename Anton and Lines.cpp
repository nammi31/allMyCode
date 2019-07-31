#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%lld %lld",&x,&y)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
#define ll          long long
using namespace std;
struct pair_y{
    ll y1;
    ll y2;
}p[1000005];
bool cmp(pair_y a,pair_y b)
{
   if(a.y1==b.y1) return (a.y2<b.y2);
   return (a.y1<b.y1);
}
int main()
{
    int n;
    while(sf1(n)==1){
       ll x1,x2,m,c;
       sf2(x1,x2);
       FOR(i,n){
        sf2(m,c);
        ll a=m*x1+c;
        ll b=m*x2+c;
        p[i].y1=a;
        p[i].y2=b;
      }
      sort(p,p+n,cmp);
      char point=0;
      FOR1(i,n){
        if(p[i].y2<p[i-1].y2){
            point=1;
            break;
        }
      }
    pfs((point)?"YES":"NO");
    }
    return 0;
}
