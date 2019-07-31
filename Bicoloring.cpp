#include<bits/stdc++.h>
#define  mem(a,x)   memset(a,x,sizeof(a))
#define  sf1(x)     scanf("%d",&x)
#define  sf2(x,y)   scanf("%d %d",&x,&y)
#define  FOR(i,x)   for(int i=0;i<x;i++)
#define  pf         printf
#define  pb         push_back
#define  pf1(x)     printf("%d ",x)
using namespace std;
int color[205],p;
vector<int>graph[205];
void bfs()
{
    queue<int>q;
    p=1;
    q.push(0);
    color[0]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        FOR(i,graph[u].size())
        {
            int v=graph[u][i];
            if(color[v]==-1)    //not color
            {
                if(color[u]==0)   color[v]=1;
                else color[v]=0;
                q.push(v);
            }
            else   //color
            {
                if(color[v]==color[u])
                {
                    p=0;
                    break;
                }
            }
        }
        if(p==0)  break;

    }
    if(p)  pf("BICOLORABLE.\n");
    else   pf("NOT BICOLORABLE.\n");
}
int main()
{
    int n,e;
    while(sf1(n)==1 && n)
    {
        for(int i=0; i<=n; i++)
        {
            graph[i].clear();
        }
        mem(color,-1);
        sf1(e);
        FOR(i,e)
        {
            int u,v;
            sf2(u,v);
            graph[u].pb(v);
            graph[v].pb(u);
        }
        bfs();
    }
    return 0;
}
