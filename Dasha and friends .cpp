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
    int n,L,sm1=0,sm2=0;
    sf2(n,L);
    int a[n],b[n];
    FOR(i,n) {
        sf1(a[i]);
        if(i!=0) sm1+=(a[i]-a[i-1]);
    }
    FOR(i,n) {
        sf1(b[i]);
        if(i!=0) sm2+=(b[i]-b[i-1]);
    }
    pf2(sm1,sm2);
    pfs((sm1==sm2)?"YES":"NO");
    return 0;
}
/*
3 8
2 4 6
1 5 7


4 9
2 3 5 8
0 1 3 6
*/
