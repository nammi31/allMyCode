#include<stdio.h>
int main()
{
    int t,i,c,delf;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&c,&delf);
        double ans=c+ (5.0*delf)/9.0;
        printf("Case %d: %.2lf\n",i,ans);
    }
    return 0;
}
