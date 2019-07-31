#include<stdio.h>
int main()
{
    int t,n,arr[7],i;
    while(scanf("%d",&n)==1){
        int count=0;
        for(i=0;i<5;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==n)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
