#include<stdio.h>
#include<string.h>
int main()
{
    char ns[1001];
    int l,i,sum;
    while(scanf("%s",ns)!=EOF){
        if(strcmp(ns,"0")==0)
            break;
        l=strlen(ns);
        sum=0;
        for(i=0;i<l;i+=2){
            sum+=ns[i]-48;
        }
            printf("sum1: %d\n",sum);
        for(i=1;i<l;i+=2){
            sum-=ns[i]-48;
        printf("sum2: %d\n",sum);
        }
        printf("sum: %d\n",sum);
        if(sum%11==0)
           printf("%s is a multiple of 11.\n",ns);
        else
            printf("%s is not a multiple of 11.\n",ns);
    }

    return 0;
}
