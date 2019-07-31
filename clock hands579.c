#include<stdio.h>
int main()
{
    double h,m,H,M,angl;
    while(scanf("%lf:%lf",&h,&m)==2){
        if(h==0 && m==0)
          break;
        H=h*30+ (m*1)/2;
        M=m*6;
        angl=H-M;
        if (angl<0)
            angl=(-1)*angl;
        if(angl>180)
            angl=360-angl;

        printf("%.3lf\n",angl);
    }
    return 0;
}
