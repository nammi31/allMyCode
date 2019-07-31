#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int i,r,temp,sum=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
       printf("%d\n",sum);

return 0;
}
