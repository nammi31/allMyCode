#include<stdio.h>
long long fact(int n);
int main()
{
    int num;
    long long factorial;
    scanf("%d",&num);
    factorial=fact(num);
    printf(" factorial of number:%lld",factorial);
    return 0;
}
long long fact (int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
