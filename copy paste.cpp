#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int t,n,a[100003];
    sf1(t);
    while(t--)
    {
        sf1(n);
        FOR(i,n) sf1(a[i]);
        sort(a,a+n);
        int cnt=1;
        FOR(i,n-1) if(a[i]!=a[i+1]) cnt++;
        pf1(cnt);
    }
    return 0;
}
