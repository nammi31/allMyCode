#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pcase(x)    printf("Case %d: ",x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define mx 10008
using namespace std;
vector < vector <int> > g;
int vis[mx], dis[mx], low[mx], art[mx], counter, parent[mx];
int find_articulation(int u)
{
	int child;
	counter++;
	vis[u] = 1;
	child = 0;
    dis[u] = low[u] = counter;
	FOR(i,g[u].size()) {
		int v = g[u][i];
		child++;
		if(!vis[v]) {   //tree edge
			parent[v] = u;
			find_articulation(v);
			low[u] = min(low[u], low[v]);
            if(child > 1 and parent[u] == -1)
				art[u] = 1;

			if(parent[u] != -1 and low[v] >= dis[u])
				art[u] = 1;
		}
       else {                           //back edge
			if(v != parent[u])        //parent na hoy
				low[u] = min(low[u], dis[v]);
		}
    }
}

int main()
{

	int t,n,e,x,y,k=1;
	int cnt;
	sf1(t);
	while(t--) {
		sf2(n,e);
        vector < vector <int> > tg(n + 2);
		   swap(tg, g);
        mem(parent,-1);
        mem(vis,0);
        mem(art,0);
		counter = 0;
		cnt = 0;
		while(e--) {
			sf2(x,y);
            g[x].pb(y);
			g[y].pb(x);
         }

		FOR1(i,n) {
			if(!vis[i]) find_articulation(i);
		}

		FOR1(i,n) {
			if(art[i]) cnt++;
		}
        pcase(k++);
		pf1(cnt);

	}

}
/*
#include<bits/stdc++.h>
#define   mx        10003
#define  sf1(x)   scanf("%d",&x)
#define  sf2(x,y) scanf("%d %d",&x,&y)
#define mem(a,x)  memset(a,x,sizeof(a))
#define pb        push_back
#define FOR(i,x)  for(int i=0;i<x;i++)
#define FOR1(i,x) for(int i=1;i<=x;i++)
#define pcase(c)  printf("Case %d: ",c)
#define pf1(x)    printf("%d\n",x)
using namespace std;
vector<vector<int> >graph;
int parent[mx],vis[mx],art[mx],counter;
int find_artpoint(int u)
{
    vis[u]=1;
    counter++;
    int dis[mx],low[mx];
    dis[u]=low[u]=counter;
    int child=0;
    FOR(i,graph[u].size())
    {
        int v=graph[u][i];
        child++;
        if(!vis[v])
        {
            parent[v]=u;
            find_artpoint(v);
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1 && child>1)         art[u]=1;  //parent nai child 2
            if(parent[u]!=-1&& low[v] >= dis[u]) art[u]=1;
        }
        else{ if(v != parent[u])
				low[u] = min(low[u], dis[v]);
         }
    }
}
int main()
{
    int t,n,e,cnt,k=0;
    sf1(t);
    while(t--){
      sf2(n,e);
      vector<vector<int> >tg(n+2);
      swap(tg,graph);
      mem(parent,-1);  mem(vis,0);  mem(art,0);
      counter=0;
      cnt=0;
      int u,v;
      FOR(i,e){ sf2(u,v);graph[u].pb(v);  graph[v].pb(u);}
      FOR1(i,n){  if(!vis[i])  find_artpoint(i);}
      FOR1(i,n) {  if(art[i])    cnt++;}
      pcase(k++);
      pf1(cnt);
    }
    return 0;
}*/

