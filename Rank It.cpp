#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int a[100007],n;
int binary(int lw,int hi,int x)
{
   while(lw<=hi)
   {
     int mid=(lw+hi)/2;
     if(a[mid]<x)   lw=mid+1;  //nm boro
     else if(a[mid]>x) hi=mid-1;  //nm choto
     else  return mid+1;
   }
 }
int main()
{
    int q,x;
    sf1(n);
    FOR(i,n) sf1(a[i]);
    sort(a,a+n);
    sf1(q);
    while(q--){
        sf1(x);
        pf1(binary(0,n-1,x));
    }
    return 0;
}
