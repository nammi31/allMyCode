/*#include<bits/stdc++.h>
#define sf1(x)    scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define FOR(i,x)  for(int i=0;i<x;i++)
#define FOR1(i,x) for(int i=1;i<=x;i++)
#define pb        push_back
#define mem(a,x)  memset(a,x,sizeof(x))
#define pcase(x)  printf("Case %d: ",x)
#define pf1(x)    printf("%d\n",x)
#define sz        1003
using namespace std;
vector<int>gr[sz];
int art[sz];
int d[sz];     //discovery time
int low[sz];
int counter;
int visit[sz];
int parent[sz];
void find_artpoint(int u)        //size check
{
     counter++;
   d[u]=low[u]=counter;
   int child=0;
   visit[u]=1;
   FOR(i,gr[u].size()){
       int v=gr[u][i];
       child++;          ///i count korlei hoy
       if(!visit[v]){   //tree edge
          parent[v]=u;
          find_artpoint(v);
          low[u]=min(low[u],low[v]);
          if(parent[v]==-1 & child>1)   art[u]=1;
          if(parent[v]!=-1 && low[v]>=d[u]) art[u]=1;
       }
       if(visit[v]){   //back_edge
            if(v!=parent[u])     ///parent na hole check
          low[u]=min(low[u],d[v]);
       }
   }
}
int main()
{
    int t,n,e,k=1;
    sf1(t);
    while(t--)
    {
       sf2(n,e);
       counter=0;
       int u,v;
       FOR(i,e) { sf2(u,v); gr[u].pb(v); gr[v].pb(u); }
       mem(art,0);
       mem(visit,0);
       mem(parent,-1);
       FOR1(i,n) {if (!visit[i])  find_artpoint(i);}
       int cnt=0;
       FOR1(i,n) if(art[i]) cnt++;
       pcase(k++);
       pf1(cnt);
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)    scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define FOR(i,x)  for(int i=0;i<x;i++)
#define FOR1(i,x) for(int i=1;i<=x;i++)
#define pb        push_back
#define mem(a,x)  memset(a,x,sizeof(x))
#define pcase(x)  printf("Case %d: ",x)
#define pf1(x)    printf("%d\n",x)
#define sz        1003
using namespace std;
vector<int>gr[sz];
int visit[sz];
int art[sz];
int counter;
int d[sz];
int low[sz];
int parent[sz];

int find_artpoint(int u)
{
    visit[u]=1;
    counter++;
    d[u]=low[u]=counter;
    int child=0;
    FOR(i,gr[u].size()){
        int v=gr[u][i];
        if(!visit[v])   //tree edge
        {
            child++;
            parent[v]=u;
            find_artpoint(v);
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1 && child>1)   art[u]=1;
            if(parent[u]!=-1 && low[v]>=d[u]) art[u]=1;
        }
        else{                  //back_edge
            if(v!=parent[u]){
                low[u]=min(low[u],d[v]);
            }
        }
    }
}
int main()
{
    int t,k=1;
    sf1(t);
    while(t--)
    {
       mem(visit,0);
       mem(art,0);
       mem(parent,-1);
       int cnt=0,counter=0;
       int n,e;
       sf1(n);
       FOR1(i,n) gr[i].clear();
       sf1(e);
       FOR(i,e) {int u,v; sf2(u,v); gr[u].pb(v); gr[v].pb(u); }
       FOR1(i,n) if(!visit[i])   find_artpoint(i);
       FOR1(i,n) if(art[i]) cnt++;
       pcase(k++);
       pf1(cnt);
    }
    return 0;
}

