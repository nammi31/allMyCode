#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pfn         printf("\n")
#define pf1(x)      printf("%d ",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int a[2000007];
int main()
{
    int n;
    while(sf1(n)==1 && n){
        FOR(i,n)  sf1(a[i]);
        sort(a,a+n);
        FOR(i,n-1)  pf1(a[i]);
        pf("%d",a[n-1]); pfn;
    }
    return 0;
}
