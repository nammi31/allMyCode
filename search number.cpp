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
int a[1000005],n;
int search(int x)
{
    int lw=0, hi=n-1;
    while(lw<=hi){
        int mid=(hi+lw)/2;
        if(a[mid]==x)  return mid+1;
        else if(a[mid]< x) lw=mid+1;
        else hi=mid-1;
    }
    return 0;
}
int main()
{
    sf1(n);
    FOR(i,n) sf1(a[i]);
    int nm;
    sf1(nm);

    if(search(nm)==0) pf("-1\n");
    else pf1(search(nm));
    return 0;
}
/*
5
1 2 3 4 5
*/
