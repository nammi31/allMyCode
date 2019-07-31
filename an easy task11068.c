#include<stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,d,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&c1,&a2,&b2,&c2)!=EOF){
        if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0 )
            break;
        d=a1*b2-a2*b1;
        if(d==0)
        printf("No fixed point exists.\n");
        else{
            x=(c1*b2-c2*b1)/d;
            y=(a1*c2-a2*c1)/d;
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;
}
