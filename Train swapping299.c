#include<stdio.h>
int main()
{
    int t,l,i,arr[60],swap,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        for(i=0; i<l; i++)
            scanf("%d",&arr[i]);

        for(i=0,swap=0; i<l-1; i++)
        {
            for(j=i+1; j<l; j++)
            {
                if(arr[i]>arr[j])
                    swap++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",swap);
    }
    return 0;
}
