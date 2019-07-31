#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int len,i,j,sum,v[30];
    while(scanf("%s",str)!=EOF){
        len=strlen(str);
        sum=0;
        for(i=0;i<len;i++){
            if(str[i]>='a' && str[i]<='z'){
                v[i]=str[i]-96;
            }
            else if(str[i]>='A' && str[i]<='Z'){
                v[i]=str[i]-38;
            }
            sum=sum+v[i];
        }
       if(sum==1 ||sum==2)
        printf("It is a prime word.\n");
       else{
            for(j=2;j<sum;j++){
            if(sum%j==0)
                break;
            }
            if(j==sum)
                printf("It is a prime word.\n");
            else
                printf("It is not a prime word.\n");
          }
    }
    return 0;
}
