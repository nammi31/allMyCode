#include<stdio.h>
int add_digit(int num);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=add_digit(n);
    printf("sum of digit:%d",sum);
    return 0;
}
int add_digit(int num)
{
    if(num==0)
        return 0;
    return num%10+add_digit(num/10);
}
