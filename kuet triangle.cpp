#include<bits/stdc++.h>
#define sf3(x,y,z)   scanf("%d %d %d",&x,&y,&z)
#define pf1(x)       printf("%d\n",x)
using namespace std;
int main()
{
    int a,b,c,mx;
    while(sf3(a,b,c)==3)
    {
        mx=max(c,max(a,b));
        pf1(mx);
    }
    return 0;
}
