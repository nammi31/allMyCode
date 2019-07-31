#include<stdio.h>
 int add_digit(long int num);
int main()
{

    long int n;
    int ans;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
            break;
        ans=add_digit(n);
        printf("%d\n",ans);
    }
    return 0;

}
 int add_digit(long int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    if(sum>=1 && sum<=9)
        return sum;
    else
        return add_digit(sum);
}
