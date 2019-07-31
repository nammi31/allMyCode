#include<stdio.h>
#include<stdbool.h>
int main()
{
    int p,m,i,j,k,g,count;
    bool flag;
    while(scanf("%d %d",&p,&m)==2)
    {
        count=0;
        for(i=1; i<=p; i++)
        {
            flag=1;
            for(j=1; j<=m; j++)
            {
                scanf("%d",&g);
                if(g==0)
                    flag=1;

            }
            if(flag)
            count++;

        }
        printf("%d\n",count);
    }
    return 0;
}
