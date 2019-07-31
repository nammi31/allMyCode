#include<stdio.h>
int main()
{
    int t,i,r,y,xleft,xright;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&r);
        y=(r*3)/2;
        xleft=(r*9)/4;
        xright=(r*11)/4;
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,-xleft,y,xright,y,xright,-y,-xleft,-y);
    }
    return 0;
}
