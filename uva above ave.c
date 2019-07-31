#include<stdio.h>
int main()
{
    int i,t,n,count,a[1000],sum;
    double ave,per;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
         sum=0,count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        ave=(double)(sum/n);
        for(i=0; i<n; i++)
        {
            if(a[i]>ave)
                count++;
        }
        per=(count*100.0)/n;
        printf("%.3lf%%\n",per);

    }
    return 0;
}
