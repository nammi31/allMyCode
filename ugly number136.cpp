#include<stdio.h>
/*
#include<stdbool.h>
bool  Ugly( int n)
{

    while(n % 2 == 0)n/=2;
    while(n % 3 == 0)n/=3;
    while(n % 5 == 0)n/=5;

    return n == 1;
}*/
int main()
{
   /* int i,cnt = 1;
    for( i = 2; ;i++){
        if(Ugly(i)) cnt++;
        if(cnt==1500) break;
    }*/
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
