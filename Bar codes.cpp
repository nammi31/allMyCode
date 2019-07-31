
/*int dp[51][51][51],n,k,m;
int rec(int pos,int alt)
{
    pf2(pos,alt);
    if(alt<0) return 0;
    if(pos<=0){
        if(pos<0)  return 0;
        if(alt==0) return 1;
    }
    int &ret=dp[pos][alt][m];
    if(ret!=-1) return ret;
    ret=0;
    FOR1(i,m) ret+=rec(pos-i,alt-1);
    return ret;
}
int main()
{
    int t,c=1;
    mem(dp,-1);
    sf1(t);
    while(t--){
        sf3(n,k,m);
        pcase(c++);
        pf1( rec(n,k));
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define mem(a,x)   memset(a,x,sizeof(a))
#define sf1(a)     scanf("%d",&a)
#define sf2(a,b)   scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf1(x)     printf("%d\n",x);
#define pf2(x,y)   printf("%d %d\n",x,y);
#define pcase(x)   printf("Case %d: ",x)
#define FOR(i,x)   for(int i=0;i<x;i++)
#define FOR1(i,x)  for(int i=1;i<=x;i++)
using namespace std;
int n,tk,dp[10][1000],coins[10],times[10];
int rec(int i,int tk)
{
    pf2(i,tk);
    if(i>=n){
        if(tk==0) return 1;
        return 0;
    }
  //  if(dp[i][tk]!=-1) return dp[i][tk];
    int p1=0;
    FOR(j,times[i]+1){
    if(tk-j*coins[i]>=0)
        p1+=rec(i+1,tk-j*coins[i]);
        else break;
    }

}
int main()
{
    int t,c=1;
    sf1(t);
    while(t--)
    {
      //  mem(dp,-1);
        sf2(n,tk);
        FOR(i,n) sf1(coins[i]);
        FOR(i,n) sf1(times[i]);
        pf1(rec(0,tk));
    }
    return 0;
}
