#include<stdio.h>
int main()
{
    int t,i,j,n;
    long int size,animal,tools,sum;
    while(scanf("%d",&t)!=EOF){
          while(t--)
          {
            scanf("%d",&n);
            sum=0;
            for(i=1; i<=n; i++){
                scanf("%ld %ld %ld",&size,&animal,&tools);
                sum=sum+size*tools;
                }
                printf("%ld\n",sum);
          }
    }
    return 0;
}
