#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define ll long long
using namespace std;
struct point
{
    ll list;
    ll x;
    ll y;
}mp[100005];
int n;
int cmp(point a,point b)
{
    return (a.x<b.x)||(a.x==b.x&&a.y<b.y);
}
int main()
{
    while(sf1(n)==1)
    {
        FOR(i,n){
            sf2(mp[i].x,mp[i].y);
            mp[i].list=i+1;
        }
        sort(mp,mp+n,cmp);
        int m=2;
        while((mp[0].x-mp[1].x)*(mp[0].y-mp[m].y)==(mp[1].y-mp[1].y)*(map[1].x-map[m].x))
        {
            m++;
        }
        printf("%lld %lld %lld\n",map[1].list,map[2].list,map[m].list);
    }
    return 0;
}
/*
5
0 0
1 2
2 0
2 2
1 1

3
-8 6
-7 2
-2 4
*/
