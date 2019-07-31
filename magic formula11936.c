#include<stdio.h>
int main()
{
    long long int a,b,c,d,L,x,fx;
    int count;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        count=0;
        for(x=0; x<=L; x++)
        {
            fx=a*x*x+b*x+c;
            if(fx%d==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
