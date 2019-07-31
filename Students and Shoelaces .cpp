#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
using namespace std;
vector<int>adj[105];
int deg[105]={0},one[105];
int main()
{
    int n,e,u,v;
    sf2(n,e);
    while(e--){
       sf2(u,v);
       deg[u]++, deg[v]++;
       adj[u].pb(v), adj[v].pb(u);
    }
    int ans=0;
    while(1){
       int m=0;
       FOR1(i,n) if(deg[i]==1) { one[++m]=i; deg[i]--;}
       if(m==0) break;
       ans++;
       FOR1(i,m){
           int u=one[i];
           FOR(j,adj[u].size()) deg[adj[u][j]]--;
       }
    }
    pf1(ans);
    return 0;
}
/*
6 5
1 3
3 5
5 4
4 2
5 6

8 7
3 5
1 3
3 8
3 6
6 7
5 4
4 2
*/
