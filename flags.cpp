#include<bits/stdc++.h>
#define sf(x)       scanf("%d",&x)
#define FOR(i,l,u)  for(int i=l;i<=u;i++)
#define pf(x)       printf("%lld\n",x)
using namespace std;
int main()
{
    int n;
    long long ways[50];
    while(sf(n)==1){
        ways[1]=2,ways[2]=2;
        FOR(i,3,n) ways[i]=ways[i-1]+ways[i-2];
        pf(ways[n]);
    }
    return 0;
}
