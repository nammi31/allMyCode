#include<stdio.h>
long long square_sum(long long num)
{
    long long sum=0,r;
    while(num!=0){
        r=num%10;
        sum=sum+r*r;
        num=num/10;
    }
    return sum;
}
int main()
{
    long long t,i,n,temp;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        temp=n;
        n=square_sum(n);
        while(n>9){
            n=square_sum(n);
        }
        if(n==1)
            printf("Case #%lld: %d is a Happy number.\n",i,temp);
        else
            printf("Case #%lld: %d is an Unhappy number.\n",i,temp);
    }
    return 0;
}
