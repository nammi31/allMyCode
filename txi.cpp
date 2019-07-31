#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a,b,n,t,x,y,v,s,d;
    while(cin>>a>>b){
        cin>>n;
        double mn=9999999;
        while(n--){
            cin>>x>>y>>v;
            d=(x-a)*(x-a)+(y-b)*(y-b);
            s=sqrt(d);
            t=s/v;
            if(t<mn)  mn=t;
        }
        printf("%.20lf\n",t);
    }
    return 0;
}
