#include<stdio.h>
int main()
{
    int t,i,n,j,v[10000],max;
    scanf("%d",&t);
    if(t>0 && t<=50)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            for(j=0; j<n; j++)
            {
                scanf("%d",&v[j]);
            }
            max=v[0];
            for(j=1; j<n; j++)
            {
                if(v[j]>max)
                    max=v[j];
            }
            printf("Case %d: %d\n",i,max);

        }
    }
    return 0;
}

