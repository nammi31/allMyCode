
#include<stdio.h>
int main()
{
      int sum=0,prod=1,num;
      for(num=5;num>=1;num--){
            sum=sum+num;
            prod=prod*num;
      }
      printf("product and sum: %d %d",prod,sum);
      return 0;

}
