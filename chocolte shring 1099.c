#include<stdio.h>
int main()
{
    int n,x,y,total,i,d,j=1;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        scanf("%d %d",&x,&y);
        total=x*y;
        for(i=1;i<=n;i++){
            scanf("%d",&d);
            if(total%d!=0)
               break;
        }
        if(i==n+1)
        printf("Case %d: Yes\n",j++);
        else
         printf("Case %d: No\n",j++);

        }
    return 0;
}
