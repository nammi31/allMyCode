#include<bits/stdc++.h>
#define INF 100000
using namespace std;
int dis[1005][1005];
int X[4]={-1,0,1,0},Y[4]={0,1,0,-1};
int n,m,sr,sc;
queue<int>q;
/*void printdis()
{
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<dis[i][j]<<" ";
        cout<<endl;
   }
}*/
int cango(int r,int c)
{
   return (r>=0 && r<=n && c>=0 && c<=m && dis[r][c]==-1);
}
void go(int r,int c,int val)
{
    dis[r][c]=val+1;
    q.push(r); q.push(c);
}
void bfs()
{
    dis[sr][sc]=0;
    q.push(sr); q.push(sc);
    while(!q.empty()){
        int x=q.front(); q.pop();
        int y=q.front(); q.pop();
        for(int i=0;i<4; i++){
           int vi=x+X[i],vj=y+Y[i];
         if(cango(vi,vj))
             go(vi,vj,dis[x][y]);
      /*  if(cango(x,y+1))
            go(x,y+1,dis[x][y]);
        if(cango(x+1,y))
            go(x+1,y,dis[x][y]);
        if(cango(x,y-1))
            go(x,y-1,dis[x][y]);*/
        }
    }
}
int main()
{
    int numrow ,i,j,row,numbomb,col;
    while(scanf("%d %d",&n,&m)==2 && (n|m)){
        scanf("%d",&numrow);
        memset(dis,-1,sizeof(dis));
        for(i=0; i<numrow; i++){
           scanf("%d %d",&row,&numbomb);
           for(j=0;j<numbomb; j++){
              scanf("%d",&col);
              dis[row][col]=INF;
           }
        }
        int destr,destc;
        scanf("%d %d %d %d",&sr,&sc,&destr,&destc);
        bfs();
        cout<<dis[destr][destc]<<endl;
    }
    return 0;
}
