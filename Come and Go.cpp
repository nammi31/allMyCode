#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
#define sz          2003
using namespace std;
int n,e;
vector<int>gr[sz];
int visit[sz],low[sz],num_scc;
stack<int>st;
void dfs(int u,int timer){
     visit[u]=1;
     low[u] = timer;
     st.push(u);
     FOR(i,gr[u].size()){
        int v = gr[u][i];
        if(!visit[v]){   //tree edge
            dfs(v,timer+1);
            low[u] = min(low[u],low[v]);
        }
        else  // back_edge
            low[u] = min(low[u],low[v]);
    }
    if(low[u] == timer){
        while(1){
            int x = st.top(); st.pop();
            if(x == u) break;
        }
        num_scc++;
    }
}

int main(){
    while(sf2(n,e)==2 && (n|e)){

        FOR1(i,n) gr[i].clear();
        int u,v,w;
        while(e--){
            sf3(u,v,w);
            gr[u].push_back(v);
            if(w == 2) gr[v].push_back(u);
        }
        mem(visit,0);
        num_scc = 0;
        FOR1(i,n) if(!visit[i]) dfs(i,0);
        printf("%d\n",(num_scc == 1)? 1 : 0);
    }

    return 0;
}
/*
4 5
1 2 1
1 3 2
2 4 1
3 4 1
4 1 2
3 2
1 2 2
1 3 2
3 2
1 2 2
1 3 1
4 2
1 2 2
3 4 2
0 0
*/
