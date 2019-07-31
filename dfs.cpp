#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
int visited[100],i,j;
void dfs(int s)
{
    visited[s]=1;
    int u;
    for(i=0;i<graph[s].size();i++){
        u=graph[s][i];
        if(!visited[u]){
            printf("%d ",u);
            dfs(u);

        }
    }
}
int main()
{
    int edge,n,a,b;
    cin>>edge>>n;
    for(i=0;i<edge;i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(i=1; i<=n; i++){
            printf("%d -> ",i);
        for(j=0; j<graph[i].size();j++)
           printf("%d ",graph[i][j]);
        printf("\n");

    }
    printf("1 ");
    dfs(1);
    return 0;
}
