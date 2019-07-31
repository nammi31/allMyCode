#include<bits/stdc++.h>
#define sf2(x,y) scanf("%d %d",&x,&y)
#define FOR(i,x) for(int i=0;i<x;i++)
#define sf1(x)   scanf("%d",&x)
#define pf(x)   printf("%d ",x)
#define  pf1(x)   printf("%d\n",x)
using namespace std;
int mat[5][5];
int main()
{
       int sm=0;
       FOR(i,3){
          FOR(j,3){
              sf1(mat[i][j]);
              sm+=mat[i][j];
          }
       }
       sm/=2;
       mat[0][0]=sm-(mat[0][1]+ mat[0][2]);
       mat[1][1]=sm-(mat[1][0]+mat[1][2]);
       mat[2][2]=sm-(mat[2][0]+mat[2][1]);
       FOR(i,3){
          FOR(j,2)
            pf(mat[i][j]);
          pf1(mat[i][2]);
       }
    return 0;
}
