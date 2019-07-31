#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf3(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define sf4(w,x,y,z)  scanf("%d %d %d %d",&w,&x,&y,&z)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)    for(int i=1;i<=x;i++)
#define pb          push_back
#define mp          make_pair
#define mem(a,x)    memset(a,x,sizeof(a))
#define INF         INT_MAX
#define ll          long long
using namespace std;
pair<int,int>pr[100005];
vector< pr >adj[100005];
void cmp(pr a, pr b)
{
    return(a.second<b.second);
}
int visit[100005];
int dis[100005];
int main()
{
    int t;
    int n,e,x,y;
    sf1(t);
    while(t--){
        sf4(n,e,x,y);
        FOR(i,n+5) adj[i].clear();
        FOR(i,e){
            int a,b,w;
            sf3(a,b,w);
            adj[a].pb(mp(b,w)); adj[b].pb(mp(a,w));
        }
        mem(visit,0);
        FOR1(i,n) dis[i]=INF;
        dis[x]=0;
        priority_queue<pair<int,int> > Q,cmp();
        Q.push(x,0);
        while(!Q.empty()){
           int u=Q.top();  Q.pop();
           if(u==v) break;

           if(visit[u]) continue;
           FOR(i,adj[u].size()){
              int v= adj[u][i].first;
              int w =adj[u][i].second;
              if(dis[u]+w < dis[v])
                   dis[v]=dis[u]+w;
              Q.push(v);
           }
           visit[u]=1;
        }
        if(dis[y]==INF) pf("NONE\n");
        else pf1(dis[y]);
     }
    return 0;
}

