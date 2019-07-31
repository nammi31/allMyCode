#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,a[10007],x;
    while(sf1(n)==1)
    {
        FOR(i,n) sf1(a[i]);
        sf1(x);
        int cnt=0;
        FOR(i,n){ if(a[i]==x) cnt++;}
        pf1(cnt);
    }
    return 0;
}
