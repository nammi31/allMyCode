#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sz       100003
#define pb       push_back
#define FOR(i,x) for(int i=0;i<x;i++)
#define pcase(x) printf("Case %d : ",x)
#define pf1(x)   printf("%d\n",x)
using namespace std;
vector<int>gr[sz];
int d[sz],low[sz];
int visit[sz],art[sz];
int counter;
void art_point(int u,int par)
{
   visit[u]=1;
   d[u]=low[u]=++counter;
   int child=0;
   FOR(i,gr[u].size())
   {
       int v=gr[u][i];
       if(v==par) continue;
       if(!visit[v]){   //tree edge
           child++;
           art_point(v,u);
           low[u]=min(low[v],low[u]);
           if(low[v]>=d[u] && par!=0)   art[u]=1;
       }
       else //back_edge
         low[u]=min(low[u],d[v]);
   }
   if(child>1 && par==0) art[u]=1;
       return;
}
int main()
{
    int t,k=1;
    sf1(t);
    while(t--)
    {
       int n,e;
       sf2(n,e);
       for(int i=1;i<=n+2;i++){
        gr[i].clear();
        d[i]=low[i]=0;
        visit[i]=0;
        art[i]=0;
       }
       int u,v;
       FOR(i,e){sf2(u,v); gr[u].pb(v);  gr[v].pb(u); }
       art_point(1,0);
       counter=0;
       int cnt=0;
       for(int i=1;i<=n;i++) if(art[i])  cnt++;
       pcase(k++);
       pf1(cnt);
    }
    return 0;
}
/*2
5 4
2 1
1 3
4 1
5 4

3 3
1 2
2 3
1 3*/
/*#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sz       1003
#define pb       push_back
#define FOR(i,x) for(int i=0;i<x;i++)
#define pcase(x) printf("Case %d : ",x)
#define pf1(x)   printf("%d\n",x)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z);
using namespace std;
vector<int>gr[sz];
int d[sz],low[sz];
int visit[sz],art[sz];
int counter;
void art_point(int u,int par)
{
    pf1(u);
    visit[u]=1;
    d[u]=low[u]=++counter;
    int child=0;
    FOR(i,gr[u].size())
    {
        int v=gr[u][i];
        if(v==par) continue;
        if(!visit[v]){   //tree edge
            child++;
            art_point(v,u);
            low[u]=min(low[u],low[v]);
                pf3(u,v,low[u]);
            if(low[v]>=d[u] && par!=0)  art[u]=1;
        }
        else {// back_edge
            low[u]=min(low[u],d[v]);
                pf3(u,v,low[u]);
         }
    }
    if(child>1  && par==0)  art[u]=1;
}
int main()
{
    int t,k=1;
    sf1(t);
    while(t--)
    {
        int n,e;
        sf2(n,e);
        for(int i=1;i<=n+3; i++)
        {
            gr[i].clear();
            d[i]=low[i]=0;
            visit[i]=art[i]=0;
        }
        int u,v;
        FOR(i,e){  sf2(u,v);  gr[u].pb(v);   gr[v].pb(u);}
        counter=0;
        art_point(1,0);
        int cnt=0;
        for(int i=1;i<=n;i++) if(art[i]) cnt++;
        pcase(k++);
        pf1(cnt);
    }
    return 0;
}

/*3
  5 5
  1 2
  2 3
  2 5
  3 4
  5 3*/
