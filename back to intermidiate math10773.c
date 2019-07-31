#include<stdio.h>
#include<math.h>
int main()
{
    double d,v,u,w,tmin,t1,diff;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf",&d,&v,&u);
        if(u>v && u!=0 && v!=0 && d!=0){
           w=sqrt(u*u-v*v);
           t1=d/w;
           tmin=d/u;
           diff=t1-tmin;
           printf("Case %d: %.3lf\n",i,diff);
        }
        else
            printf("Case %d: can't determine\n",i);
    }
    return 0;
}
