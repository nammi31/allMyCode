#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
#define sz          100003
using namespace std;
int n,m,cat[sz],visit[sz]={0},rest=0;
vector<int>gr[sz];
void dfs(int u,int con_cat)
{
    visit[u]=1;
    if(!cat[u]) con_cat=0;
    con_cat+=cat[u];
    if(con_cat>m)  return;   //parent a fire asbo
    if(gr[u].size()==1 && u!=1)  rest++;  //child hoy
    FOR(i,gr[u].size()){
        int v=gr[u][i];
        if(!visit[v]) dfs(v,con_cat);
    }
    return;
}
int main()
{
    while(sf2(n,m)==2)
    {
       FOR1(i,n)   sf1(cat[i]);
       int u,v;
       FOR(i,n-1){ sf2(u,v); gr[u].pb(v); gr[v].pb(u); }  //making graph
       dfs(1,0);
       pf1(rest);
    }
    return 0;
}
/*
4 1
1 1 0 0
1 2
1 3
1 4

7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7
*/
