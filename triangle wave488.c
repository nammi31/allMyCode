#include<stdio.h>
int main()
{
    int n,m,i,j,k,x,t,c;
    scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d",&n,&m);
            while(m--)
            {
                x=0;
                for(j=1; j<=n; j++)
                {
                    x++;
                    for(k=1; k<=j; k++)
                        printf("%d",x);

                    printf("\n");
                }
                for(j=1; j<=n-1; j++)
                {
                    x--;
                    for(k=1; k<=n-j; k++)
                        printf("%d",x);

                    printf("\n");
                }
                if(m||t )
                printf("\n");
            }
        }
    return 0;
}
