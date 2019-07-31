#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[102][102];
void dfs(int x,int y)
{
    if(x==n || y==m ||x<0 ||y<0 ) return;
    if(a[x][y]=='@'){
        a[x][y]='*';
        dfs(x-1,y-1);
        dfs(x-1,y);
        dfs(x-1,y+1);
        dfs(x+1,y-1);
        dfs(x,y+1);
        dfs(x,y-1);
        dfs(x+1,y+1);
        dfs(x+1,y);
        }

}
int main()
{
    while(cin>>n>>m && n){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int cnt=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]=='@'){
                      dfs(i,j);
                       cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
