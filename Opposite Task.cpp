#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf          printf
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--){
       sf1(n);
       if(n>10)
        pf("%d 10\n",n-10);
       else pf("0 %d\n",n);
    }
    return 0;
}
