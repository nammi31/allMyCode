#include<stdio.h>
int main()
{
    int t,e,f,r,n,ans;
    scanf("%d",&t);
    if(t>0 && t<15){
        while(t--){
            scanf("%d %d %d",&e,&f,&r);
            n=e+f;
            ans=0;
            while(n>=r){
                ans=ans+n/r;
                n=(n/r)+(n%r);
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
