#include<stdio.h>
int main()
{
    long long int a,b,d;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {

        d=b-a;
        if(d<0)
        {
            d=(-1)*d;
        }
        printf("%lld\n",d);
    }
    return 0;
}
