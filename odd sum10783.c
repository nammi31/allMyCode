#include<stdio.h>
int main()
{
    int t,i,a,b,sum,j;
        while(scanf("%d",&t)!=EOF){
            for(i=1;i<=t;i++){
               scanf("%d %d",&a,&b);
               sum=0;
               for(j=a;j<=b;j++){
                   if(j%2!=0)
                    sum=sum+j;
               }
               printf("Case %d: %d\n",i,sum);
            }
        }
        return 0;

}
