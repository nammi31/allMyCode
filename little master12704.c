#include<stdio.h>
#include<math.h>
int main()
{
    float t,x,y,r,dis;
    scanf("%f",&t);
    while(t--){
       scanf("%f %f %f",&x,&y,&r);
       dis=sqrt( x*x + y*y );
       printf("%.2f %.2f\n",r-dis,r+dis);
    }
    return 0;
}
