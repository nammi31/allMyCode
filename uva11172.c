
#include<stdio.h>
int main()
{
    int a,b,t,i;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0; i<=t; i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
                printf(">\n");
            else if(a<b)
                printf("<\n");
            else if(a=b)
                printf("=\n");
        }
        return 0;
    }
}
