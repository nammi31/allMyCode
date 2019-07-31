#include<stdio.h>
int main()
{
    int n,i,r,mx;
    while(scanf("%d",&n)==1)
    {
        int cnt=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&r,&mx);
            if(r<mx)
            {
                if((mx-r)>1)
                    cnt++;
            }
        }
        printf("%d\n",cnt);

    }
    return 0;
}
