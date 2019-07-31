
#include<stdio.h>
int find_sqr();
int main()
{
    int sqr;
    sqr=find_sqr();
    printf("square :%d\n",sqr);
    return 0;
}
int find_sqr()
{
    int num;
    printf("number:");
    scanf("%d",&num);
    return num*num;
}
