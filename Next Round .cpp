#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,k,cnt=0;
    sf2(n,k);
    int a[53];
    FOR(i,n)  sf1(a[i]);
    FOR(i,n){
        if(a[i]>=a[k-1] && a[i]) cnt++;
    }
    pf1(cnt);
    return 0;
}
