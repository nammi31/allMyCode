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
    int n;
    sf1(n);
    int a[n];
    FOR(i,n) sf1(a[i]);
    sort(a,a+n);
    char triangle=0;
    for(int j=n-1; j>=2; j--){
        if(a[j]<(a[j-1]+a[j-2])){
            triangle=1;
            break;
        }
    }
    pfs((triangle)?"YES":"NO");
    return 0;
}
