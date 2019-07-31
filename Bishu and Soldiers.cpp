#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int a[10007];
int main()
{
    int n,q,x;
    sf1(n);
    FOR(i,n) sf1(a[i]);
    sf1(q);
    while(q--){
       sf1(x);
       int sm=0,die=0;
       FOR(i,n){
          if(a[i]<=x){  sm+=a[i]; die++;}
       }
       pf2(die,sm);
    }
    return 0;
}
