#include<stdio.h>
int main()
{
    int t,i;
    double a,b,c,each,extra,A_get;
    scanf("%d",&t);
    if(t>0 && t<=100)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lf %lf %lf",&a,&b,&c);
            each=(a+b)/3;
            extra=a-each;
            A_get=(c*extra)/each;
            if(A_get<=0)
                printf("0\n");
                else
                    printf("%.0lf\n",A_get);
        }
    }
    return 0;
}
