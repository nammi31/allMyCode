#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
using namespace std;
int main()
{
    int t,c=1;
    sf1(t);
    while(t--){
      int p,k,d,x;
      cin>>p>>k>>d;
      x=k/d+1;
      pcase(c++);
      pf("%d\n",p+d*x);
    }
    return 0;
}
