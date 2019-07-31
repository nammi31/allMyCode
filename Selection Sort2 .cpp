#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)      printf("%d \n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1){
        int a[n];
        FOR(i,n)  sf1(a[i]);

      int cnt=0;
      FOR(i,n){
          int mn=i;
          for(int j=i ;j<n;j++){
              if(a[j]<a[mn])
                mn=j;
          }
          if(a[i]>a[mn]){
                swap(a[i],a[mn]);
                cnt++;
          }
      }
      FOR(i,n-1)  pf1s(a[i]);
      pf1(a[n-1]);
      pf1(cnt);
    }

    return 0;
}
