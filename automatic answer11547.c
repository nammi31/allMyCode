#include<stdio.h>
int main()
{
    int t,i,n,result,d_tens;
    scanf("%d",&t);
    while(--t){
        for(i=0; i<=t;i++){
                printf("case :%d\n",i+1);
            scanf("%d",&n);
            result=(n*567/9+7492)*235/47-498;
            printf("result:%d\n",result);

            d_tens=(result/10)%10;
            if(d_tens<0)
                d_tens=(-1)*d_tens;
            printf("%d\n",d_tens);

        }
        return 0;
    }
}
