#include<stdio.h>
int main()
{
    int t,n,i,j,h[50],h_jump,l_jump;
    scanf("%d",&t);
    if(t>0 && t<30)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            for(j=0; j<n; j++)
            {
                scanf("%d",&h[j]);
            }
            h_jump=0;
            l_jump=0;
            for(j=1; j<n; j++)
            {
                if(h[j]!=h[j-1])
                {
                    if(h[j]>h[j-1])
                        h_jump++;
                    else
                        l_jump++;
                }
            }
            printf("Case %d: %d %d\n",i,h_jump,l_jump);
        }
    }
    return 0;
}
