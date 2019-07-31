
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root,x1,x2;
    scanf("%cf %cf %cf",&a,&b,&c);
    root=sqrt(b*b-4*a*c);
    x1=(-b+root)/(2*a);
    x2=(-b-root)/(2*a);
    printf("%cf %cf",x1,x2);
    return 0;
}
