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
int cnt,dp[25];
int rec(int n)
{
    if(n==1) return cnt;
    cnt++;
    if(dp[n]!=-1) return dp[n];
    else if(n%2) dp[n]=rec(3*n+1);
    else dp[n]=rec(n/=2);
}
int main()
{
    mem(dp,-1);
    int a,b,step,mn=INT_MAX;
    sf2(a,b);
    for(int i=a; i<=b; i++){
        cnt=0;
        step=rec(i);
        if(step<mn) mn=step;
    }
    pf1(mn);
    return 0;
}
