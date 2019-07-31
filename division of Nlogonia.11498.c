#include<stdio.h>
int main()
{
    int q,px,py,x,y,i;
    while(scanf("%d",&q)==1)
    {
        if(q==0)
            break;
        scanf("%d %d",&px,&py);
        for(i=1; i<=q; i++)
        {
            scanf("%d %d",&x,&y);
            if(x==px || y==py)
                printf("divisa\n");
            else if(x>px && y>py)
                printf("NE\n");
            else if(x>px && y<py)
                printf("SE\n");
            else if(x<px && y<py)
                printf("SO\n");
            else if(x<px && y>py)
                printf("NO\n");
        }
    }
    return 0;
}
