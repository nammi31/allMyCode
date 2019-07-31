#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define pf1(x)      printf("%lld\n",x)
#define ll          long long
using namespace std;
int main()
{
    ll ans,n;
	while(sf1(n)==1)
	{
		if(n<=2)  ans=n;
		else if(n&1) ans=n*(n-1)*(n-2);     //7.6.5
		else
		{
			if(n%3!=0) ans=n*(n-1)*(n-3);  //20.19.17
			else  ans=(n-1)*(n-2)*(n-3);  //29.28.27
		}
		pf1(ans);
	}
	return 0;
 }
