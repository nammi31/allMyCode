#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d ",x)
#define pfn         printf("\n")
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,a[100005],x;
    while(sf1(n)==1)
    {
        FOR(i,n)  sf1(a[i]);
        sf1(x);
        FOR(i,n) {
            if(a[i]==x)  pf1(i+1);
        }
        pfn;
    }
    return 0;
}
