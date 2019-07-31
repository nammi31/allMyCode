#include<stdio.h>
int main()
{
    int n,arr[1001],count,i,j;
    while(scanf("%d",&n)!=EOF){
         for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        count=0;
        for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                count++;
               }
          }
       }
        printf("Minimum exchange operations : %d\n",count);
     }
    return 0;
}
