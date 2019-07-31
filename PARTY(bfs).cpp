#include<bits/stdc++.h>
using namespace std;
vector<int>adlist[2005];
int dis[2005];
int bfs(int u)
{
   queue<int>q;
   int mx=0,i;
   memset(dis,-1,sizeof(dis));
   dis[u]=0;
   q.push(u);
   while(!q.empty()){
       u=q.front(); q.pop();
      for(i=0; i<adlist[u].size(); i++){
          int v=adlist[u][i];
          if(dis[v]==-1){
            dis[v]=dis[u]+1;
            if(dis[v]>mx)  mx=dis[v];
            q.push(v);
          }
      }
   }
   return mx;
}
int main()
{
    int n,i,boss;
    cin>>n;
    for(i=1; i<=n;i++){
        cin>>boss;
        if(boss!=-1)
           adlist[boss].push_back(i);
    }
    int rt,level,deepest=0;
    for(i=1;i<=n;i++){
        rt=i;
        level=bfs(rt);
        if(level>deepest) deepest=level;
    }
    cout<<deepest+1<<endl;
    return 0;
}
