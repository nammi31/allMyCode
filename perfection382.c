
#include<stdio.h>
int main()
{
    int n,a,sum,test=1;

    while(scanf("%d",&n)==1){
       if(test)
        printf("PERFECTION OUTPUT\n");
        test=0;

        if(n==0){
         printf("END OF OUTPUT\n");
         break;
        }
      sum=0;
      for(a=1;a<=(n/2);a++){
         if(n%a==0)
            sum=sum+a;
      }
      if(sum==n)
        printf("%5d  PERFECT\n",n);
      else if(sum<n)
        printf("%5d  DEFICIENT\n",n);
      else
        printf("%5d  ABUNDANT\n",n);
    }
    return 0;
}
