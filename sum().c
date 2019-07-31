#include<stdio.h>
sum(int x,int y);
int main()
{
    sum(1,20);
    sum(9,6);
    sum(81,9);
    return 0;
}
sum(int x,int y)
{
    printf("%d\n",x+y);
}
