#include<stdio.h>
struct variable
{
    float num;
    char *ptr;
};
int main()
{
    struct variable x;
    char string[8]="Welcome";
    x.num=1.23;
    x.ptr=string;
    printf("%f\n",x.num);
    printf("%s",x.ptr);
    return 0;
}
