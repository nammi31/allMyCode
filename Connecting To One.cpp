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
//int vr[50005][50005];
pair<int,int>pr;
vector < pr >vr[50005];
int visit[50005];
int traverse(int u,int x)
{
    int cnt=0;
    visit[u]=1;
    for(int i=0;i<vr[u].size();i++){
            if(!visit[vr[u][i]])
            if(vr[u][i]>x){
                cnt++;
                traverse(vr[u][i],x);
            }
    }
    return cnt;
}
int main()
{
    int t,q,n,e,x;
    sf1(t);
    while(t--){
        sf2(n,e);
        while(e--){
           int u,v,w;
           sf3(u,v,w);
           vr[u].make_pair(v,w);
           vr[v].make_pair(u,w);
        }
       /* sf1(q);
        while(q--){
            sf1(x);
            pf1(traverse(1,x));
        }*/
    }
    return 0;
}
