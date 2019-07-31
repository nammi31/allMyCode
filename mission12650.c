#include<stdio.h>
int main()
{
    int n,r,x,i,j,flag[10005],arr[10005];
    while(scanf("%d %d",&n,&r)==2){

        for(i=0;i<r;i++)
          scanf("%d",&arr[i]);

        if(n==r)
          printf("*\n");
        else{
            for(j=1;j<=n;j++)
              flag[j]=0;

            for(i=0;i<r;i++){
               x=arr[i];
               flag[x]=1;
            }
            for(i=1;i<=n;i++){
              if(flag[i]==0)
                printf("%d ",i);
            }
          printf("\n");
       }
    }
    return 0;
}
