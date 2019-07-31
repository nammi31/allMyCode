#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,i,j,temp,arr[500],sum,mid;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[j]<arr[i]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        mid=arr[n/2];
        sum=0;
        for(i=0;i<n;i++)
           sum= sum+ abs(mid-arr[i]);

         printf("%d\n",sum);
    }
    return 0;
}
