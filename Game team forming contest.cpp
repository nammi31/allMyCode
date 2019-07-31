#include<bits/stdc++.h>
#define  sf4(x1,x2,x3,x4)   scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4)
#define  pf   printf
using namespace std;
int main()
{
    long long int n1,n2,k1,k2;
    while(sf4(n1,n2,k1,k2)==4){
      if(n1<=n2)  pf("Second\n");
      else if( n1>n2 ||(n1/k1)>(n2/k2) )  pf("First\n");
    }
    return 0;
}
