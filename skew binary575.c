#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,sum,j,r,len;
    while(scanf("%s",str)){
        if(!strcmp(str,"0"))
            break;
        len=strlen(str);
        sum=0,j=2;
        for(i=len-1;i>=0;i--){
            r= str[i]-48;
            sum=sum+r*(j-1);
            j=j*2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
