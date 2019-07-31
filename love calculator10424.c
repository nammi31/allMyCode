#include<stdio.h>
#include<ctype.h>
int str_sum(char s[])
{
    int i,sum=0;
    for(i=0; s[i];i++){
        if(isupper(s[i]))
            sum+=(s[i]-64);
        else if(islower(s[i]))
            sum+=(s[i]-96);
    }
    if(sum%9==0)
        sum=9;
    else
        sum=sum%9;
    return sum;
}
int main()
{
    char s1[30],s2[30];
    float love;
    while(scanf("%s %s",str1,str2)){
        int sum1=str_sum(str1);
        int sum2=str_sum(str2);
        if(sum1>=sum2)
            love=(sum2*100.0)/sum1;
        else
            love=(sum1*100.0)/sum2;
        printf("%.2f%%\n",love);
    }
    return 0;
}
