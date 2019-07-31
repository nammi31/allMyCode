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
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int n,m;
    sf1(n);
    int of[100005],lec[100005];
    FOR(i,n) sf1(of[i]);
    sort(of,of+n);
    sf1(m);
    FOR(i,m) {
        sf1(lec[i]);
        int x=lower_bound(of,of+n,lec[i])-of;
        if(x==n) pf("Dr. Samer cannot take any offer :(.\n");
        else cout<<of[x]<<endl;
    }
    return 0;
}
