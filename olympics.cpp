#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%lf %c %lf",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf2(x,y)    printf("%.10lf %.10lf\n",x,y)
using namespace std;
int main()
{
    int k=1;
    double a,b;
    char ch;
    while(sf3(a,ch,b)==3){
        double r=sqrt(a*a+b*b);
        double s=r*atan(b/a);
        double x=400.0/(2.0*a+2.0*s);
        pcase(k++);
        pf2(a*x,b*x);
    }
    return 0;
}
