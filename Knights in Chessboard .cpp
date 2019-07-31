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
    int t,n,m,k=1;
    sf1(t);
    while(t--){
      sf2(n,m);
      int ans;
      if(n==1|| m==1)  ans=n*m;
      else{
        ans=max(n*m/2,n*m-(n*m/2));
        if(n==2|| m==2) ans=max(ans,2*( 2*(max(n,m)/4)+min(2,max(n,m)%4) ) );
      }
      pcase(k++);
      pf1(ans);
    }
    return 0;
}
