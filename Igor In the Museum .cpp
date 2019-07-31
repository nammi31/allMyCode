/*
5 6 3
******
*..*.*
******
*....*
******
2 2
2 5
4 3

4 4 1
****
*..*
*.**
****
3 2
*/
#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define mx   1005
using namespace std;
int n, m, k, id;
int sol[1000005];
int result[mx][mx],vis[mx][mx];
char s[mx][mx];
int a[4]={1,-1,0,0};
int b[4]={0,0,1,-1};
int dfs(int x, int y)
{
	vis[x][y] = id;
    result[x][y]+=((s[x + 1][y] == '*')+(s[x - 1][y] == '*')+(s[x][y + 1] == '*')+(s[x][y - 1] == '*'));
	for(int k=0; k<4; k++){
	    int X=x+a[k];int Y=y+b[k];
	    if(!vis[X][Y] && s[X][Y]=='.')
            result[x][y]+=dfs(X,Y);
	}
	return result[x][y];
}

int main()
{
	int x,y;
    sf3(n,m,k);
	FOR1(i,n) sfs(s[i]+1);
	id = 1;
	FOR1(i,n){
	    FOR1(j,m){
			if (s[i][j] == '.'&& !vis[i][j]){
				sol[id]= dfs(i, j);
				id++;
			}
		}
	}
	FOR1(i,k)
	{
		sf2(x,y);
		pf1(sol[vis[x][y]]);
	}
	return 0;
}
