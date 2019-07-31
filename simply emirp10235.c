#include<stdio.h>
 int check_prime(long int num);
int main()
{
    long int n,rev,x;
    while(scanf("%ld",&n)==1){
         if(check_prime(n)!=1)
            printf("%ld is not prime.\n",n);
         else{
              rev=0;
              x=n;
              while(n!=0){
              rev=rev*10+n%10;
              n=n/10;
              }
              if(rev!=x && check_prime(rev)==1)
                printf("%ld is emirp.\n",x);
              else
                printf("%ld is prime.\n",x);
        }
    }
    return 0;
}
int check_prime(long int num)
{
    if(num==2)
        return 1;
    if(num<2)
        return 0;
    else{
        int i;
        for(i=2;i*i<=num;i++){
            if(num%i==0)
                return 0;
        }
          return 1;
    }
}
