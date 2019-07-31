#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--)
    {
        sf1(n);
        int a[n];
        FOR(i,n) sf1(a[i]);
        int mx=0,dif=INT_MIN;
        for(int i=0; i<n-1;i++){
            if(a[i]>mx) mx=a[i];
            if(mx-a[i+1]>dif) dif=mx-a[i+1];
        }
        pf1(dif);
    }
    return 0;
}
