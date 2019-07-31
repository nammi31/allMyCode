#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,a[100007];
    while(sf1(n)==1)
    {
        int cnt[10]={0};
        FOR(i,n) {
            sf1(a[i]); cnt[a[i]]++;
        }
        FOR(i,10) pf2(i,cnt[i]);
    }
    return 0;
}
