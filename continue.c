#include<stdio.h>
int main()
{
    int i,j;
    int total=0;
    do{
       printf("two numbers");
       scanf("%d %d",&i,&j);
       if((i!=j){
        printf("mismatch\n");
        continue;
       }
    total=total+i;
    }
    while(i);
    printf("total %d",total);
    return 0;
}
