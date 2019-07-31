#include<stdio.h>
int main()
{
    int n,ans;
    while(scanf("%d",&n)!=EOF){
        ans=n;
        while(n>=3){
            ans=ans+n/3;
           n=(n/3)+(n%3);
        }
        if(n==2)
            ans=ans+1;
            printf("%d\n",ans);
    }
    return 0;
}
