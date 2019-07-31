#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("It is not prime.");
            break;
        }
    }
        if(i==num)
            printf("It is prime.");
    return 0;
}
