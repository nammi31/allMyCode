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
#define mx 1000000
using namespace std;
int divcnt[mx+1];
int main()
{
    int i,j;
    for(i=1; i<=mx; i++){
        for(j=i; j<=mx; j+=i)
            divcnt[j]++;
    }
    int t;
    sf1(t);
    while(t--){
       int a,b,n,cnt=0;
       sf3(a,b,n);
       for(int i=a; i<=b; i++){
           if(divcnt[i]==n) cnt++;
       }
       pf1(cnt);
    }
    return 0;
}
