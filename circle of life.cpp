#include<bits/stdc++.h>
#define sf1L(x)      scanf("%lf",&x)
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%.2lf\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
#define pi          2*acos(0.0)
using namespace std;
int main()
{
    int t,k=1;
    sf1(t);
    double r,A,a;
    while(t--){
      sf1L(r);
      A=4*r*r;
      a=pi*r*r;
      pcase(k++);
      pf1(A-a);
    }
    return 0;
}
/*
3
20
30.091
87.0921
Case 1: 343.36
Case 2: 777.26
Case 3: 6511.05
*/
