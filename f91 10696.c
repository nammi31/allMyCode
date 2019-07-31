#include<stdio.h>
int main()
{
    int n,ans;
    while(scanf("%d",&n)==1 && n!=0){
        if(n>=101)
            ans=n-10;
        else
            ans=91;
        printf("f91(%d) = %d\n",n,ans);
    }
    return 0;
}
