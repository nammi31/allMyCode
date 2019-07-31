#include<bits/stdc++.h>
using namespace std;
int dis[100],visited[100],mx=0;
vector<int>adlist[100];
int dfs(int u)
{
    visited[u]=1;
  //  if(adlist[u].size()==0 ) return mx;  //no child
   // else{
       for(int i=0;i<adlist[u].size();i++){
        int v=adlist[u][i];
        if(!visited[v]){
            dis[v]=dis[u]+1;
            printf("dis[%d]: %d\n",v,dis[v]);
            if(dis[v]>mx) mx=dis[v];
            dfs(v);
       }
    }
   return mx;
}
int main()
{
    int n,boss,i,j;
    cin>>n;
    for(i=1;i<=n; i++){
       cin>>boss;
       if(boss!=-1) adlist[boss].push_back(i);
    }
   for(i=1;i<=n;i++){
        printf("%d ->",i);
        for(j=0;j<adlist[i].size();j++)
            printf(" %d",adlist[i][j]);
        printf("\n");
    }
    int rt;
    for(rt=1;rt<=n;rt++){
        printf("rt: %d\n",rt);
        memset(visited,0,sizeof(visited));
        memset(dis,0,sizeof(dis));
        dis[rt]=1;
    //    int level=dfs(rt);
      //  if(level>mx)  mx=level;
    }
    cout<<mx<<endl;
    return 0;
}
