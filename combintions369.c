#include<stdio.h>
int main()
{
    unsigned long long int com;
    int n,r,i,x,y;
    while(scanf("%d %d",&n,&r)==2){
        if(n==0 && r==0)
            break;
        printf("%d things taken %d at a time is ",n,r);
        if(n-r <r) r=n-r;
        com=1;
        for(i=1;i<=r;i++,n--)
            com=(com*n)/i;
         printf("%llu exactly.\n",com);
    }
    return 0;
}
