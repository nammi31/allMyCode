#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%lf %lf",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%.2f %.2f\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int t,k=1;
    sf1(t);
    while(t--)
    {
       double R,r,A,a1,a2,rA;
       sf2(R,r);
       A=3.14159*R*R;
       a1=3.14159*r*r;
       a2=3.14159*(R-r)*(R-r);
       rA=(A-a1-a2)/2.0;
       double ans2=rA+a1,ans1=rA+a2;
       pf("Taijitu #%d: yin %.2f, yang %.2f\n\n",k++,ans1+.00501,ans2+.00501);

    }
    return 0;
}
/*
2
10 5
12 7
*/
