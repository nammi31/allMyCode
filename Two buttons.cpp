#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int dis[100003],b,v;
int bfs(int s)
{
    dis[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        if(dis[u-1]==-1 && u-1>0){  //not visited
            dis[u-1]=dis[u]+1;
            q.push(u-1);
        }
        if(dis[2*u]==-1 && 2*u<2*b){
            dis[2*u]=dis[u]+1;
            q.push(2*u);
        }
         if(u-1==b || 2*u==b   )   return dis[b];

    }
}
int main()
{
    int a;
    while(sf2(a,b)==2)
    {
        mem(dis,-1);
        pf1(bfs(a));
    }
    return 0;
}
