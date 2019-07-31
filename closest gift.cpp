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
bool isprime(int n)
{
    if(n<=1) return 0;
    if(n==2 || n==3) return 1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,a,b;
    sf1(n);
    for(int i=n; ; i++){
        if(isprime(i)){
            a = i;
            break;
        }
    }
    for(int i=n; ; i--){
        if(isprime(i)){
            b = i;
            break;
        }
    }
    pf1(min(abs(a-n),abs(n-b)));
    return 0;
}
