#include<stdio.h>
int main()
{
    int n,arr[20],t,c,i,j,temp;
    scanf("%d",&t);
     for(c=1;c<=t;c++){
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
        printf("Case %d: %d\n",c,arr[(n/2)] );
    }
    return 0;
}
