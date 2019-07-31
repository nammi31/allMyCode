#include<bits/stdc++.h>
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOr(i,l,u)    for(int i=l;i<u;i++)
#define sf1(x)   scanf("%d",&x)
#define pf   printf
using namespace std;
int main()
{
    int t,n,a[107];
    sf1(t);
    while(t--)
    {
        sf1(n);
        FOR(i,n)  sf1(a[i]);
        int loc=0,inv=0;
        FOR(i,n-1){
            if(a[i]>a[i+1]) loc++;
            FOr(j,i+1,n)
             if(a[i]>a[j])  inv++;
        }
        if(inv!=loc)  pf("NO\n");
        else         pf("YES\n");
    }
    return 0;
}
