#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,k;
    while(sf2(n,k)==2)
    {
        int a[n],mx=0,ans=0;
        FOR(i,n) {
            sf1(a[i]);
            if(a[i]>mx)  mx=a[i];
        }
        if(mx>k) ans=mx-k;
        pf1(ans);
    }
    return 0;
}
