#include<bits/stdc++.h>
#define INF 1000000
#define cango(r,c) (r>=0 && r<n && c>=0 && c<m && dis[r][c]==-1)
using namespace std;
int dis[100][100],n,m,si,sj,cnt;
queue<int>q;
/*void printdis()
{
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%3d ",dis[i][j]);
        cout<<endl;
   }
}*/
void go(int r,int c,int val)
{
    dis[r][c]=val+1;
    q.push(r); q.push(c);
}
void bfs()
{
   q.push(si);q.push(sj);
   dis[si][sj]=0;
   cnt=0;
   while(!q.empty()){
      int x=q.front(); q.pop();
      int y=q.front(); q.pop();
       cnt++;
      if( cango(x-1,y))
        go(x-1,y,dis[x][y]);
      if(cango(x,y+1))
            go(x,y+1,dis[x][y]);
      if(cango(x+1,y))
            go(x+1,y,dis[x][y]);
      if(cango(x,y-1))
            go(x,y-1,dis[x][y]);
   }
}
int main()
{
    int t,k=1;
    char ch;
    cin>>t;
    while(t--){
      cin>>m>>n;
      int i,j;
      for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ch;
            if(ch=='.') dis[i][j]=-1;
            if(ch=='@') si=i,sj=j;
            if(ch=='#') dis[i][j]=INF;
        }
      }
      bfs();
      //printdis();
      printf("Case %d: %d\n",k++,cnt);
    }
    return 0;
}
