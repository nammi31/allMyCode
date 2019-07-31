#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],b[10][10],sum[10][10];
    printf("number of rows and colunms:\n");
    scanf("%d %d",&m,&n);

    printf("first matrix:\n");
     for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d", &a[i][j]);

    printf("second matrix:\n");
     for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d", &b[i][j]);

    printf("sum of matrices:\n");
     for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
   return 0;
}





