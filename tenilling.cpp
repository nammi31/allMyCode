#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
const double pi=acos(-1),r=6371009;
double cg(double a)
{
	return a/180*pi;
}
int main()
{
	int t;
	double a,b,c,d,x[2],y[2],z[2];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		a=cg(a);b=cg(b);c=cg(c);d=cg(d);
		z[0]=r*sin(a);
		z[1]=r*sin(c);
		y[0]=r*cos(a)*sin(b);
		y[1]=r*cos(c)*sin(d);
		x[0]=r*cos(a)*cos(b);
		x[1]=r*cos(c)*cos(d);
		a=pow(x[0]-x[1],2)+pow(y[0]-y[1],2)+pow(z[0]-z[1],2);
		b=acos(1-a/2/r/r);
		b=r*b;
		a=sqrt(a);
		printf("%.0lf\n",b-a);
	}
}

