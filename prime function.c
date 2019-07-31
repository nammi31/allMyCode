
#include<stdio.h>
int check_prime(int n);
int main()
{
    int num,result;
    scanf("%d",&num);
    result=check_prime(num);
    if(result==1)
      printf("prime");
    else
      printf("not prime");
    return 0;
}
int check_prime(int n)
{
      int i;
      for(i=2;i<n;i++){
            if(n%i==0)
            return 0;
      }
            if(n==i){
            return 1;

      }

}
