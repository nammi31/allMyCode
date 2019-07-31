#include<stdio.h>
int main()
{
    long long int n,fact,i;
    while(scanf("%lld",&n)==1){
           if(n<0){
               if(n%2!=0)
                printf("Overflow!\n");
               else
                printf("Underflow!\n");
           }
           else if(n>=0 && n<=7)
             printf("Underflow!\n");
           else if(n>13)
             printf("Overflow!\n");
           else{
            fact=1;
            for(i=n;i>=2;i--){
            fact=fact*i;
            }
            printf("%lld\n",fact);
          }
    }
    return 0;
}
