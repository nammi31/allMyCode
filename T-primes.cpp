#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfL(x)      scanf("%lld",&x)
#define pfs(x)      printf("%s\n",x)
#define ll          long long
#define mx          1000003
using namespace std;
int p[mx];
void seive()
{
  for(int i=2;i<mx; i++) p[i]=1;
  int r=sqrt(mx);
  for(int i=2;i<=r;i++){
    if(p[i]){
        for(int j=2; i*j<mx; j++)
            p[i*j]=0;
    }
  }
}
int main()
{
    seive();
    int t;
    sf1(t);
    while(t--)
    {
        ll n,r;
        sfL(n);
        r=sqrt(n);
        pfs((r*r==n && p[r])?"YES":"NO");

    }
    return 0;
}

