#include<stdio.h>
int main()
{
    char str[105];
    int i;
    unsigned long long int sum;
    while(scanf("%s",str)==1){
        int sum=0;
        for(i=0; str[i];i++)
            sum=sum+(str[i]-48);

       printf("%llu\n",sum);
    }
    return 0;
}
