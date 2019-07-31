#include<stdio.h>
int main()
{
    int i,j,n=3,x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
                printf("%d ",x++);
            }
        printf("\n");
    }
    return 0;
}
