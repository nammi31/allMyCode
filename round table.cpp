#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
	int n,m,a,b,i,j;
	while(sf3(n,a,b)==3)
	{
		int ans=0;
		if(b==0) ans=a;
		else if(b<0)
		{
			b=b%n;
			if(a+b<=0)
			    ans=n+a+b;
			else
			    ans=a+b;
		}
		else if(b>0)
		{
			b=b%n;
			if(a+b<=n)
			    ans=a+b;
			else
			    ans=a+b-n;
		}
		pf1(ans);
	}
	return 0;
}
