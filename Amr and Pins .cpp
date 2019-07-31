 #include<bits/stdc++.h>
#define sf5(x,y,z,a,b)  scanf("%lf %lf %lf %lf %lf",&x,&y,&z,&a,&b)
#define pf1(x)      printf("%.0lf\n",x)
using namespace std;
int main()
{
    double r,x,y,x1,y1;
    sf5(r,x,y,x1,y1);
    double dis=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    double i=0;
    while((2*i*r)<dis) i++;
    pf1(i);
    return 0;
}
