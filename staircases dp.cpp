/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[200][200];
ll rec(int prev,int roise)
{
    if(roise==0)  return 1;
    if(roise<=prev)  return 0;
  //  ll &ret=dp[prev][roise];
    if(dp[prev][roise]!=-1)   return dp[prev][roise];
    ll way=0;
    for(int i=prev+1;i<=roise;i++)
        way+=rec(i,roise-i);
    return dp[prev][roise]=way;
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,n)-1<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define ll          long long
#define mem(a,x)    memset(a,x,sizeof(a))
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,lo,u) for(int i=lo;i<=u;i++)
using namespace std;
ll dp[503][503];
ll rec(int p,int r)
{
    if(r==0) return 1;
    if(r<=p)  return 0;
    if(dp[p][r]!=-1)  return dp[p][r];
    ll way=0;
    FOR(i,p+1,r) way+=rec(i,r-i);
    return dp[p][r]=way;
}
int main()
{
    int n;
    sf1(n);
    mem(dp,-1);
    pf1(rec(0,n)-1);
    return 0;
}
