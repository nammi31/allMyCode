#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pfs(x)      printf("%s\n",x)
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
    int n,index,a[10005];
    sf2(n,index);
    char posi=0;
    FOR1(i,n-1) {
        sf1(a[i]);
         if(i+a[i]==index) { pf("YES\n"); break;}
         if(i+a[i]>index) { pf("NO\n"); break; }
    }
    return 0;
}
/*
8 4
1 2 1 2 1 2 1

8 5
1 2 1 2 1 1 1
*/
