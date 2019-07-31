/*
1
7
3 2 3 4
0
3 5 6 7
0
0
0
0
2
5 7
2 7

Output:
Case 1:
3
1
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pcase(x)    printf("Case %d:\n",x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int n,visit[1003],parent[1003];
int dfs(int u,int v)
{
    visit[u]=1;
    if(!visit[parent[u]] ) dfs(parent[u],v);
    if(!visit[parent[v]] ) dfs(u,parent[v]);
    return parent[v];

}
int main()
{
    int t,m,a,q,u,v,k=1;
    sf1(t);
    while(t--){
        sf1(n);
       // FOR1(i,n) parent[i]=i;
        FOR1(i,n){
           sf1(m);
           for(m--){
               sf1(a);
                parent[a]=i;
           }
        }
        sf1(q);
        pcase(k++);
        while(q--){
                sf2(u,v);
                if(u==v) pf1(u);
                else {
                  mem(visit,0);
                  pf1(dfs(u,v));
                }
        }
    }
    return 0;
}
