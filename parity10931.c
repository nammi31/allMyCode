#include<stdio.h>
int main()
{
    int num,i,parity,sum,r;
    while(scanf("%d",&num)==1){
        if(num==0)
            break;
        i=1,parity=0,sum=0;
        while(num!=0){
            r=num%2;
            sum=sum+r*i;
            if(r==1){
             parity++;
            }
            num=num/2;
            i=i*10;
        }
        printf("The parity of %d is %d(mod 2).\n",sum,parity);
       }
    return 0;
}
