#include<stdio.h>
int main()
{
    long long int n,i,sum,ans;
    while(scanf("%lld",&n)==1){
        sum=0;
        for(i=1;i<=n;i=i+2){
            sum=sum+i;
        }
        ans=(6*sum)-9;
        printf("%lld\n",ans);
    }
    return 0;
}
