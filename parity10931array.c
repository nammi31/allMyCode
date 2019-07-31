#include<stdio.h>
int main()
{
    unsigned long int num;
    int j,i,binary[1000],parity;
    while(scanf("%lu",&num)==1){
        if(num==0)
           break;
        i=0;
        while(num!=0){
            binary[++i]=num%2;
            num=num/2;
        }
        parity=0;
        printf("The parity of ");
        for(j=i;j>=1;j--){
            printf("%d",binary[j]);
            if(binary[j]==1)
                parity++;
        }
        printf(" is %d (mod 2).\n",parity);
    }
    return 0;
}
