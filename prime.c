#include<stdio.h>
int main()
{
    int i,num;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==2)
            printf("prime number\n");
        else
        {
            for(i=2; i<=num-1; i++)
            {
                if(num%i==0)
                    break;
            }
            if(num==i)
                printf("prime number\n");
            else
                printf("not prime\n");
        }
    }
}
