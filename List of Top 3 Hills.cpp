#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf3(x,y,z)  printf("%d\n%d\n%d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int a[15];
    FOR(i,10)   sf1(a[i]);
    sort(a,a+10);
    pf3(a[9],a[8],a[7]);

    return 0;
}
