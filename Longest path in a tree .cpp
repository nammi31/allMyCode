
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define mx        10005
using namespace std;

int i, j, n;
int dist, tests;

vector<int> adj[10005];
deque<int> q;
int dis[mx];
int bfs(int v)
{
  q.clear();
  q.pb(v);
  while(!q.empty())
  {
    int u = q.front(); q.pop_front();
    FOR(i,adj[u].size())
    {
      int v = adj[u][i];
      if (dis[v] == -1)
      {
        dis[v] = dis[u] + 1;
        q.pb(v);
      }
    }
  }
  return max_element(dis+1,dis+n+1) - dis;
}

int main(void)
{
  sf1(n);
  FOR(i,n+2) adj[i].clear();
  FOR(i,n-1){
    int x,y;
    sf2(x,y);
    adj[x].pb(y);
    adj[y].pb(x);
  }

  mem(dis,-1);  dis[1] = 0;
  int x = bfs(1);
  mem(dis,-1); dis[x] = 0;
  int y = bfs(x);
  pf1(dis[y]);
  return 0;
}





