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
int rec(int w,int valid)
{
    if(w==0 && valid==1) return 1;
    if(w==0 && valid==0) return 0;
    else if(w<0) return 0;
    int sm=0;
    for(int i=1; i<=k;i++){
       if(i>=d) sm+=rec(w-i,1);
       else sm+=rec(w-i,valid);
    }

}
int main()
{
    int n,d;
    sf2(n,d);
    rec(n,valid)
    return 0;
}
