#include<stdio.h>
int main()
{
    long long int cardn,max;
    int t,i,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        max=0;
        for(j=1;j<=n;j++){
            scanf("%lld",&cardn);
            if(cardn>max)
                max=cardn;
            }
            printf("Case %d: %lld\n",i,max);
    }
    return 0;
}
