#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pcase(x)    printf("Case %d: ",x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
using namespace std;
vector<int> gr[100005];
int colour[100005];
int main()
{
    int t,e,k=1;
    sf1(t);
    while(t--){
        sf1(e);
        FOR1(i,e+3) gr[i].clear();
        FOR1(i,e+3) colour[i]=-1;
        FOR(i,e){
           int u,v;
           sf2(u,v);
           gr[u].pb(v);
           gr[v].pb(u);
        }
        for(int i=0; i<)
        queue<int> q;
        q.push(1);
        colour[1] = 0;
        int cntw=1,cntr=0;
        while(!q.empty()){
            int u=q.front(); q.pop();
            FOR(i,gr[u].size()){
                int v = gr[u][i];
                if(colour[v]==-1){
                    colour[v]=colour[u]^1;
                    (colour[v]==0)? cntw++: cntr++;
                    q.push(v);
                }
            }
        }
        pcase(k++);
        pf1(max(cntw,cntr));
    }
    return 0;
}
/*
9
1 2
1 3
2 9
2 4
3 4
3 5
3 6
6 7
6 8
*/
