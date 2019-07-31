#include<stdio.h>
int main()
{
    int t,i,n,start,p,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&start,&p);
        ans=start+p;
        while(ans>n)
            ans=ans-n;

        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
