#include<stdio.h>
#define PI 3.1416
int main()
{
    float r,a;
    scanf("%f",&r);
    /* we also can write 3.1416 directly*/
    a= PI*r*r;
    printf("area=%f",a);
    return 0;
}
