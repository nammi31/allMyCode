
#include<stdio.h>
int main()
{
    int num,i,is_prime=1;
  scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
            is_prime=0;
    }
    if(is_prime==1)
        printf("it is prime.");
    else
        printf("not prime");
    return 0;
}
