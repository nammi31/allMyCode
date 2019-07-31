#include<stdio.h>
int main()
{
    char str[10];
    int t,v[10],k,sum1,sum2,j,p,d,i;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        for(i=0;str[i]!='-';i++)
            v[i]=str[i]-65;

        k=1,sum1=0;
        for(j=i-1;j>=0;j--){
            sum1=sum1+v[j]*k;
            k=k*26;
        }
        p=1;sum2=0;
        for(j=7;j>=4;j--){
            sum2=sum2+(str[j]-48)*p;
            p=p*10;
        }
        d=sum1-sum2;
        if(d<0)
            d=(-1)*d;
        if(d<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
