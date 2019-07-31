#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
    if(rev==temp){
        printf("palinedrome");
    }
    else
        printf("not palinedrome");
    return 0;
}
