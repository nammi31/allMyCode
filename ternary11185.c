#include<stdio.h>
int main()
{
    long long int num;
    int i,j,k,ternary[100];
    for(i=1; i<=100; i++)
    {
        scanf("%lld",&num);
        if(num<0)
            break;
        if(num==0)
            printf("0\n");
        else {
            j=0;
            while(num!=0){
              ternary[++j]=num%3;
              num=num/3;
            }
            for(k=j; k>=1; k--){
             printf("%d",ternary[k]);
            }
        printf("\n");
        }
    }
    return 0;
}
