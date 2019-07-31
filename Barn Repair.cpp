/*
ID: sustnam1
LANG: C++
TASK: barn1
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)    for(int i=1;i<x;i++)
using namespace std;
int main()
{
       freopen("barn1.in","r",stdin);
       freopen("barn1.out","w",stdout);
       int b,s,n;
       sf3(b,s,n);
       int a[n],gap[n];
       FOR(i,n) sf1(a[i]);
       sort(a,a+n);
       int ans=n,m=0;
       FOR1(i,n) if(a[i]-a[i-1]>1)
                    gap[m++]=a[i]-a[i-1]-1;

       sort(gap,gap+m);
       for(int i=m-b; i>=0;i--) ans+=gap[i];
       pf1(ans);
       return 0;
}

