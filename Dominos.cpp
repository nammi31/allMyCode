#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)   for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
#define pb          push_back
#define mx 100003
using namespace std;

bool visit[mx];
vector<int>gr[mx];
stack<int>st;
void dfs(int u)
{
    visit[u]=true;
    FOR(i,gr[u].size())
    {
        int v=gr[u][i];
        if(!visit[v])   dfs(v);
    }
    st.push(u);
    return;
}
int main()
{
    int t,n,e,u,v;
    sf1(t);
    while(t--)
    {
        sf2(n,e);
        while(e--){ sf2(u,v);  gr[u].pb(v); }
        mem(visit,0);
        FOR1(i,n){ if(!visit[i])   dfs(i);}
        mem(visit,0);
        int cnt=0;
        while(!st.empty()){
            int x=st.top(); st.pop();
            if(!visit[x]){
               cnt++;
               dfs(x);
            }
        }
        pf1(cnt);
        FOR1(i,n)   gr[i].clear();
    }
    return 0;
}
/*
2
9 8
1 2
1 4
2 3
5 4
6 3
9 6
6 7
7 8
*/
