/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pfn          printf("\n")
#define pf1(x)      printf("%d",x)
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
vector<int>adj[31];
int visit[31];
void dfs(int u)
{
    visit[u]=1;
    FOR(j,adj[u].size()){
        int v=adj[u][j];
        if(!visit[j]) dfs(v);
    }
    return;
}
int main()
{
   string s;
   int t;
   sf1(t);
   scanf("\n");
   while(t--){
     mem(visit,0);
     getline(cin,s);
     int n=s[0]-'A';
     FOR(i,n+1) adj[i].clear();
     while(getline(cin,s) && s[0]!=0){
         int x=s[0]-'A';
         int y=s[1]-'A';
         adj[x].pb(y); adj[y].pb(x);
     }
     int cnt=0;
     FOR(i,n+1) if(!visit[i]) { dfs(i); cnt++;}
     pf1(cnt);
     if(t!=0) pfn;

   }
    return 0;
}
/*
1
E
AB
CE
DB
EC*/
#include<bits/stdc++.h>
using namespace std;
#define sf1(x)      scanf("%d",&x)
#define pfn          printf("\n")
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
bool vis[30];
vector<int>adj[30];
void dfs(int u)
{
    vis[u]=1;
    FOR(i,adj[u].size())
    {
        int v=adj[u][i];
        if(!vis[v]) dfs(v);
    }
    return;
}
int main()
{
    int t,n,cnt;
    string s;
    sf1(t);
    scanf("\n");
    while(t--)
    {
        getline(cin,s);
        n=s[0]-'A';
        mem(vis,0);
        FOR(i,n+1)   adj[i].clear();
        while(getline(cin,s) && s[0]!=0)
        {
               int x=s[0]-'A';
               int y=s[1]-'A';
            adj[x].pb(y);
            adj[y].pb(x);
        }
        cnt=0;
        FOR(i,n+1) if(!vis[i]) dfs(i), cnt++;
        pf1(cnt);
        if(t!=0) pfn;

    }
    return 0;
}
