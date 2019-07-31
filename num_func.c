#include<stdio.h>
int func();
int main()
{
    int num;
    num=func();
    printf("Value of number:%d\n",num);
    return 0;
}
int func()
{
    return 99;
}
