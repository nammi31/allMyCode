
#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d ",x)
#define pfn         printf("\n")
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
#define mx          100005
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
vector<int>vr[mx],vT[mx];
int visit[mx],scc[mx],cnt;
stack<int>st;
void dfs(int u,bool f)
{
    visit[u]=1;
    if(f){
        FOR(i,vr[u].size()){
            int v=vr[u][i];
            if(!visit[v]) dfs(v,f);
        }
        st.push(u);
    }
    else{
        cnt++;
        FOR(i,vT[u].size()){
            int v=vT[u][i];
            if(!visit[v]) dfs(v,f);
        }
    }
}
int main()
{
    int n,edge;
    sf2(n,edge);
    while(edge--)
    {
      int x,y;
      sf2(x,y);
      vr[x].pb(y);  vT[y].pb(x);
    }
    bool f=true;
    FOR1(i,n) if(!visit[i]) dfs(i,f);

    mem(visit,0);  mem(scc,0);
    f=false;
    while(!st.empty()){
        cnt=0;
        int x=st.top(); pf1(x);  st.pop();
        if(!visit[x]) dfs(x,f);
        if(cnt==1)  scc[x]=0;
        else scc[x]=1;
        pf1(cnt);
    }
    FOR1(i,n)  pf1(scc[i]); pfn;
    return 0;
}
