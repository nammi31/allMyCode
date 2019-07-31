#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int t,sum,count,len,i;
    scanf("%d",&t);
    //t=t+1;
    while(t--){
        scanf("%s",str);
       // len=strlen(str);
       // if(len==0)
          //  continue;
        count=0,sum=0;
        for(i=0;str[i];i++){
            if(str[i]=='O')
                count++;
            else if(str[i]=='X')
                    count=0;
                sum=sum+count;
        }
        printf("%d\n",sum);
    }
    return 0;
}
