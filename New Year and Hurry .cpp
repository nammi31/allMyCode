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
#define FOR1(i,x)   for( i=1;i<=x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int main()
{
    int n,k;
    while(sf2(n,k)==2)
    {
        int r=240-k;
        if(r<=0)  pf("0\n");
        else{
             int sm=0,ans,i;
            FOR1(i,n){
               sm+=5*i;
               if(sm==r){ ans=i;  break;}
               if(sm>r){ ans=i-1;  break;}
            }
            if(i==n+1) ans=n;
            pf1(ans);
        }
    }
    return 0;
}
