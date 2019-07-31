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
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int main()
{
    int n;
    sf1(n);
    pf1(2*n);
    FOR1(i,n)  pf1s(i);
    FORr(i,n)  pf1s(i);
    pf("1\n");
    return 0;
}
