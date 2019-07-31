#include<stdio.h>
int main()
{
    int t,i=1,s1,s2,s3,ans;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d %d %d",&s1,&s2,&s3);
        if((s1>s2 && s1<s3)||(s1<s2 && s1>s3))
            ans=s1;
        if((s2>s1 && s2<s3)||(s2<s1 && s2>s3))
             ans=s2;
        if((s3>s1 && s3<s2)||(s3<s1 && s3>s2))
            ans=s3;
           printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}
