#include<stdio.h>
int main()
{
    int i,a,b,gcd;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;++i){
        if(a%i==0 && b%i==0)
            gcd=i;
            continue;
    }
    printf("gcd of two number:%d",gcd);
    return 0;

}
