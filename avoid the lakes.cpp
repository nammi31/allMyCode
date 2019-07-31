#include<stdio.h>
#include<stdlib.h>
#define mx 101
int map[mx][mx]={0},sm;
void dfs(int i,int j)
{
    if(map[i][j]==0)  return;
    else if(map[i][j]==1)
      {
          map[i][j]=0;
          sm++;
          dfs(i+1,j);
          dfs(i-1,j);
          dfs(i,j+1);
          dfs(i,j-1);
      }
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int i,j,max;
    while(k--)
    {
        cin>>i>>j;
        map[i][j]=1;
    }
    mx=0;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(map[i][j]==1){
                    sm=0;
                 dfs(i,j);
            }
            if(sm>max)  max=sm;
        }
    }
    cout<<max<<endl;
    return 0;
}
