#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=x-1; i>=0;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int k,a[15];
    while(sf1(k)==1){
       int total=0;
       FOR(i,12) { sf1(a[i]); total+=a[i];}
       if(total<k) { pf("-1\n"); continue; }
       sort(a,a+12,greater<int>());
       int sm=0,j=0;
       while(sm<k){
          sm+=a[j];
          j++;
       }
       pf1(j);
    }
    return 0;
}
/*
5
1 1 1 1 2 2 3 2 2 1 1 1

0
0 0 0 0 0 0 0 1 1 2 3 0

11
1 1 4 1 1 5 1 1 4 1 1 1
*/
