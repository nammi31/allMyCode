#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pcase(x)    printf("%d. ",x)
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y);
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,k=0;
  while(sf1(n)==1 && n){
    int mat[n][n];
    int sm=0;
    FOR(i,n){
        FOR(j,n){
          sf1(mat[i][j]);
          sm+=mat[i][j];
        }
    }
    int ans=0;
    FOR(i,n){
        int out=0,in=0;
        FOR(j,n) out+=mat[i][j];
        FOR(j,n) in+=mat[j][i];
        if(out-in>0) ans+=(out-in);
    }
    pcase(++k);
    pf2(sm,ans);
  }
    return 0;
}
