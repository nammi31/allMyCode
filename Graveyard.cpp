#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define FOR1(i,x)   for(int i=1.0;i<x;i++)
#define pf4(x)      printf("%.4lf\n",x)
using namespace std;
const double P = 10000.0;
int main()
{
    int n,m;
    while(sf2(n,m)==2)
    {
        double r=P/n,d=P/(n+m);
        double pre=r,now=d,ans=0.0;
        FOR1(i,n){
            pre=r*i;
            while(now<pre) now+=d;
            ans+=min(now-pre,pre-now+d);
        }
        pf4(ans);
    }
    return 0;
}
