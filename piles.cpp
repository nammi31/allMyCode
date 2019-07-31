#include<bits/stdc++.h>
#define sf3(x,y,z)   scanf("%d %d %d",&x,&y,&z)
#define sf1(x)        scanf("%d",&x)
#define FOR(i,x)      for(int i=0;i<x;i++)
#define pf1(x)   printf("%d\n",x)
using namespace std;
int main()
{
    int t,n,a,d;
    sf1(t);
    while(t--)
    {
        sf3(n,a,d);
        int sm=0;
        FOR(i,n) sm+=(a+d*i);
        pf1(sm);
    }
    return 0;
}
