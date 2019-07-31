#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,x,a[100007];
    while(sf1(n)==1)
    {
        FOR(i,n) sf1(a[i]);
        sf1(x);
        int small=0,large=0;
        FOR(i,n){
            if(a[i]>x) large++;
            else if(a[i]<x) small++;
        }
        pf2(large,small);
    }
    return 0;
}
