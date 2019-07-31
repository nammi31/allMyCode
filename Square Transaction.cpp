#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)

using namespace std;
int a[1000005];
int main()
{
    int n,x,q;
    sf1(n);
    FOR(i,n)  sf1(a[i]);
    sf1(q);
    while(q--){
      sf1(x);
      int sm=0,day=-1;
      FOR(i,n){
        sm+=a[i];
        if(sm>=x) {day=i+1;  break;}
      }
      pf1(day);
    }
    return 0;
}
