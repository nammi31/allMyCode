#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1){
      int a[n];
      FOR(i,n)   sf1(a[i]);
      FOR(i,n){
          int key=a[i];
          int j=i-1;
          while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
          }
          a[j+1]=key;
          FOR(i,n-1)    pf1s(a[i]);
          pf1(a[n-1]);

      }

    }
    return 0;
}
