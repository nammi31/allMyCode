#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1)
    {
        int cnt=0;
        while(n){ n/=2; cnt++;}
        pf1(cnt);
    }
    return 0;
}
