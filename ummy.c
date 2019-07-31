#include<stdio.h>
int main()
{
    int a=6;
    float b=7.2;
    float c = a+b;
    printf("%f\n",c);
    printf("a+b = %f\n",c);
    printf("%d + %f = %f\n",a,b,c);
   /*int i;
    for(i=1;i<=10; i++)
        printf("%d ",i);

    int i=1;
    while(i<=10){
        printf("%d ",i);
        i++;
    }

    int i=1;
    do{
        printf("%d ",i);
        i++;
    }
    while(i<=10);*/
   /* int n=5;
    int i=1;
    int prod=1;
    while(i<=n)
    {
       prod=prod*i;
       i++;
    }
    printf("%d\n",prod);*/
    int n=25;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%5==0) break;
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
