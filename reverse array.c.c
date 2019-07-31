#include<stdio.h>
int main()
{
    int num,i=0,rem[100],j;
    scanf("%d",&num);
    while(num!=0)
    {
        rem[++i]=num%10;
        num=num/10;
    }
    printf("%d\n",i);
    for(j=1; j<=i; j++)
    {
        printf("%d",rem[j]);
    }
    return 0;

}
