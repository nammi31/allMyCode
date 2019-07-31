#include<stdio.h>
#include<math.h>
int main()
{
    int decimalN=0,r,i=0,p;
    long long num;
    scanf("%lld",&num);
    while(num!=0){
        r=num%10;
        num=num/10;
        p=pow(2,i);
        printf("power %d: %d\n",i,p);
        decimalN=decimalN+ r*p;
        i++;
    }
    printf("%d",decimalN);
    return 0;

}
