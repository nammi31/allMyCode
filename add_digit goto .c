#include<stdio.h>
int main()
{

    long int num;
    int sum;
    while(scanf("%ld",&num)!=EOF)
    {
        if(num==0)
            break;

    again:
        sum=0;
        while(num!=0){
            sum=sum+num%10;
            num=num/10;
        }
        if(sum>=1 && sum<=9)
            printf("%d\n",sum);
        else{
            num=sum;
            goto again;
        }
    }
    return 0;
}
