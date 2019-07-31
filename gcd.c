#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);
    while(r!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("gcd of numbers:%d",a);
    return 0;

}
