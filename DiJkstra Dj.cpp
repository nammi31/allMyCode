/*#include<bits/stdc++.h>
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
template<class T >
struct Dijkstra
{
    int n;
    vector<vector<pair<int,T > > >adj;
    vector<T>dis;
    vector<int>parent;
    Dijkstra(int m): n(m),adj(m) {};
    void addedge(int a,int b,T w)
    {
        adj[a].pb(make_pair(b,w));
        adj[b].pb(make_pair(a,w));
    }
    void find_shortestpath(int src)
    {
        priority_queue < pair<T,int> ,vector<pair<T,int> >,greater<pair<T,int> > >Q;
        dis=vector<T>(n,numeric_limits<T>::max());
        parent=vector<int>(n,-1);
        dis[src]=0;
        Q.push({src,0});
        while(!Q.empty())
        {
            auto p=Q.top();
            Q.pop();
            T d=p.first;
            int u=p.second;
            for(auto x:adj[u])
            {
                int v=x.first;
                T d=x.second;
                if(dis[v]-d>dis[u])
                {
                    dis[v]=dis[u]+d;
                    parent[v]=u;
                }
                Q.push({dis[v],v});
            }
        }
    }
};

int main()
{
    Dijkstra<int>D(6);
    D.addedge(0,1,7);
    D.addedge(0,2,9);
    D.addedge(0,5,14);
    D.addedge(1,2,10);
    D.addedge(1,3,15);
    D.addedge(2,3,11);
    D.addedge(2,5,2);
    D.addedge(3,4,6);
    D.addedge(4,5,9);
    D.find_shortestpath(0);
    for(int i=0; i<6; i++)
         cout<<D.dis[i]<<endl;
    return 0;
} */
#include<bits/stdc++.h>
using namespace std;
template <class T>
struct dijkstra
{
    int n ;
    vector<vector<pair<int,T> > >adj;
    vector<T> dist;
    vector<int> parent;
    dijkstra(int m) : n(m),adj(m) {};

    void addedge(int a, int b,T w)
    {
        adj[a].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(a,w));
    }
    void findshortestpath(int src)
    {
        priority_queue<pair<T,int>, vector<pair<T,int> >, greater<pair<T, int> > > Q;
        dist= vector<T>(n,numeric_limits<T>::max());
        parent= vector<int>(n,-1);
        dist[src]=0;
        Q.push(make_pair(0,src));
        while(!Q .empty())
        {
            auto p= Q.top();
             Q.pop();
            T d=p.first;
            int u=p.second;
            for(auto x: adj[u])
            {
                int v=x.first;
                T d=x.second;
                if(dist[v]-d> dist[u])
                {
                    dist[v]=dist[u]+d;
                    parent[v]=u;
                    Q.push(make_pair(dist[v],v));
                }
            }
        }
    }
};

int main()
{
    dijkstra <int> D(6);
    D.addedge(0,1,7);
    D.addedge(0,2,9);
    D.addedge(0,5,14);
    D.addedge(1,2,10);
    D.addedge(1,3,15);
    D.addedge(2,3,11);
    D.addedge(2,5,2);
    D.addedge(3,4,6);
    D.addedge(4,5,9);
    D.findshortestpath(0);
    for(int i=0; i<6; i++)
    {
        cout<<D.dist[i]<<" ";
    }
    cout<<endl;
    return 0;
}
