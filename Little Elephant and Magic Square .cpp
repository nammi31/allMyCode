#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pfn         printf("\n")
#define pf1(x)      printf("%d ",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int a[3][3],sm=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            sf1(a[i][j]);
            sm+=a[i][j];
        }
    }
    sm/=2;
    a[0][0]=sm-a[0][1]-a[0][2];
    a[1][1]=sm-a[1][0]-a[1][2];
    a[2][2]=sm-a[2][0]-a[2][1];
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++)
            pf1(a[i][j]);
        pfn;
    }
    return 0;
}
/*
0 3 6
5 0 5
4 7 0*/
