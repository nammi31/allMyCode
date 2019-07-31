#include<bits/stdc++.h>
#define pf              printf
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define inf             1000000007
#define FOR(i,x)        for(int i=0;i<(x); i++)
#define FOR1(i,x)       for(int i=1;i<=(x); i++)
#define mx              100007
#define pb              push_back
using namespace std;
typedef long long int lint;
typedef double dbl;

vector<int> edge[mx];
int low[mx], dis[mx], vis[mx], T = 0, pos = 0;
//pii scc_solver[mx];
stack<int> st;

int art_point(int u, int par)
{
    low[u] = dis[u] = T++;
    vis[u] = 1;
    st.push(u);
    FOR(i, edge[u].size()){
        int v = edge[u][i];
        if(!vis[v]){        //tree edge
            art_point(v, u);
            low[u] = min(low[u], low[v]);
        }
        else if(vis[v]) low[u] = min(low[u],dis[v]); //back_edge
    }
    int cnt = 1, mn = inf;
    if(low[u]==dis[u]){
        pf("SCC number %d# contains:\n", pos+1);
        while(!st.empty()){
            int x = st.top();
            st.pop();
            pf("%d\n", x);          // eikhaner shobgula x ekta SCC er ontorvukto
            vis[x] = 2;
            if(x==u) break;
        }
        pos++;
    }
}

int main()
{
    int t, tst = 1;
    int n, m;t6
    sf2(n, m);
    FOR(i, m)
    {
        int u, v;
        sf2(u, v);
        edge[u].pb(v);
    }

    FOR1(i, n) {
        if(!vis[i]) dfs(i, -1);
    }

    return 0;
}

