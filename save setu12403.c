#include<stdio.h>
#include<string.h>
int main()
{
    int t,amount=0,sum=0;
    char str[10];
    scanf("%d",&t);
        while(t--){
            scanf("%s",str);
            if(strcmp(str,"donate")==0){
                scanf("%d",&amount);
                sum=sum+amount;
            }
            else
                printf("%d\n",sum);
        }
    return 0;
}
