#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,n,t,x,y,v,s,d,i;
    while(scanf("%lf %lf",&a,&b)==2){
        scanf("%lf",&n);
        double mn=9999999;
        for(i=0;i<n;i++){
            scanf("%lf %lf %lf",&x,&y,&v);
            d=sqrt((x-a)*(x-a)+(y-b)*(y-b));
            t=d/v;
            if(t<mn)  mn=t;
        }
        printf("%.20lf\n",mn);
    }
    return 0;
}

