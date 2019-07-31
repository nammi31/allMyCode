#include<stdio.h>
int main()
{
     int p,num,r,i,binaryN=0;
    scanf("%d",&num);
    i=1;
    while(num!=0){
        r=num%2;
        num=num/2;
        binaryN=binaryN+ r*i;
        i=i*10;
        }
        printf("%d",binaryN);
        return 0;
}
