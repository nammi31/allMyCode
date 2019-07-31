#include<stdio.h>
int main()
{
    int t,i,j,arr[12];
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--){
        for(i=0;i<10;i++)
         scanf("%d",&arr[i]);

         int ascend=1,desend=1;
        for(i=0;i<9;i++){
            for(j=i+1;j<10;j++){
                if(arr[j]<arr[i])
                    ascend=0;
                else
                    desend=0;
            }
        }
        if(ascend==1 || desend==1)
            printf("Orderd\n");
        else
            printf("Unorderd\n");
    }
    return 0;
}
