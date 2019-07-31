#include<stdio.h>
int main()
{
    int t,n,k,x,ans,i;
    scanf("%d",&t);
    if(t>0 && t<100)
    {
        for(i=1; i<=t; i++)
        {
            int j,m,sum1=0,sum2=0;
            scanf("%d %d %d",&n,&k,&x);

            for(j=1; j<=n; j++)
            {
                sum1=sum1+j;
            }
            for(m=x; m<=k+x-1; m++)
            {
                sum2=sum2+m;
            }
            ans=sum1-sum2;
            printf("Case %d: %d\n",i,ans);
        }
    }
    return 0;
}
