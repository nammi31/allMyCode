#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    int t;
    double l,w,r,grn_area,red_area;
    scanf("%d",&t);
    while(t--){
            scanf("%lf",&l);
            r=(double)l/5;
            w= (double)(l*3)/5;
            red_area=PI*r*r;
            grn_area=(w*l) - red_area;
            printf("%0.2lf %0.2lf\n",red_area,grn_area);
           }
    return 0;
}
