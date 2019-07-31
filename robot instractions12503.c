#include<stdio.h>
#include<string.h>
int flag[110];
int main()
{
    int t,n,i,m,sum;
    char str[30];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++){
            gets(str);
            if(strcmp(str,"LEFT")==0)
                flag[i]=-1;
            else if(strcmp(str,"RIGHT")==0)
                flag[i]=1;
            else if(strcmp(str,"SAME AS")==0){
                scanf("%d",&m);
                flag[i]=flag[m];
                printf("m: flag[%d] =%d\n",i,flag[m]);
            }
            sum=sum+flag[i];
            printf("flag[%d] = %d\nsum: %d\n",i,flag[i],sum);
        }
        printf("sum:%d\n",sum);
    }
    return 0;
}
