#include<stdio.h>
int main()
{
    int n,bdg,h,w,i,j,bed,price,min_cost,cost;
    while(scanf("%d %d %d %d",&n,&bdg,&h,&w)==4){
            min_cost=bdg;
        for(i=1;i<=h;i++){
            scanf("%d",&price);
            for(j=1;j<=w;j++){
                scanf("%d",&bed);
                if(bed>=n){
                  cost=n*price;
                  if(cost<min_cost)
                    min_cost=cost;
                }
            }
         }
        if( min_cost==bdg)
            printf("stay home\n");
        else
            printf("%d\n",min_cost);

    }
    return 0;
}
