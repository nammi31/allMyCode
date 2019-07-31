#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
double x, y, c;
double ans(double w)
{
return 1 - c / sqrt(x * x - w * w) - c / sqrt(y * y - w * w);
}

int main()
{  int t,k=0;
scanf("%d",&t);
while(t--)
{scanf("%lf%lf%lf",&x,&y,&c);
        double l = 0, mid, r = min(x,y);
        while(r - l > 0.00000001)
        {
            mid = (l + r) / 2;
            if(ans(mid) > 0)
                l = mid;
            else
                r = mid;
        }
		printf("Case %d: ",++k);
        printf("%lf\n",mid);
    }

}
