#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
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
using namespace std;
struct team{
    int m;
    int t;

}T[53];
bool cmp(team a, team b)
{
    if(a.m==b.m) return a.t<b.t;
    return (a.m>b.m);
}
int main()
{
    int n,k;
    sf2(n,k);
    FOR(i,n){
       sf2(T[i].m,T[i].t);
    }
    sort(T,T+n,cmp);
    int cnt=0,i;
    for( i=0;i<n; i++){
            cnt++;
            if(T[i].m==T[i+1].m && T[i].t==T[i].t) cnt--;
            if(cnt==k) break;
    }
    cout<<i+1<<endl;

    return 0;
}
