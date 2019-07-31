#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf          printf
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1){
     if(n==1||n==2) pf("-1\n");
     else{
        FOR(i,n-1) pf("7 ");
        pf("3\n");
     }
     /*int a[n];
     FOR1(i,n) sf1(a[i]);
     for(int i=1;i<=n-1;i++){
        for(int j=i; j<=n-1;j++){
          if(a[j]>a[j+1])
             swap(a[j],a[j+1]);
        }
     }*/
    }
    return 0;
}
