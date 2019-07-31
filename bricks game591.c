#include<stdio.h>
int main()
{
    int n,j=1,arr[100],avg,d,i;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        int sum1=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum1=sum1+arr[i];
        }
        avg=sum1/n;
        int sum2=0;
        for(i=0;i<n;i++){
            if(arr[i]>avg){
                d=arr[i]-avg;
                sum2=sum2+d;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j++,sum2);

    }
    return 0;
}
