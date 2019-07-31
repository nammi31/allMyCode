#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){  // 5 times
        for(j=1;j<=10;j++){
        printf("%d ",j);
        if(j==7)
            break;
        }
        printf("\n");
    }
    return 0;
}
