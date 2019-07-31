#include<stdio.h>
int main()
{
    int k,t,a[105],i;
    while(scanf("%d %d",&k,&t)==2)
    {
        for(i=0; i<t; i++)
          scanf("%d",&a[i]);
        int sum=0;
        for(i=0;i<t;i++){
            sum+=a[i];
            sum=sum-k;
            if(sum<0)
                sum=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}
