#include<stdio.h>
#include<stdlib.h>
int main()
{
    int flag[3005],n,i,arr[3005],diff;
    while(scanf("%d",&n)==1){

        for(i=1;i<=n-1;i++)   ///1 2 3 4
            flag[i]=0;        ///0 0 0 0
                              ///1 1 0 1
        scanf("%d",&arr[0]);
        for(i=1;i<n;i++){
            scanf("%d",&arr[i]);   /// 2 3 5 11 6
            diff=abs(arr[i]-arr[i-1]);
            flag[diff]=1;
        }
        for(i=1;i<=n-1;i++){  1 2 3 4 5
            if(flag[i]==0)
                break;
        }
        if(i==n)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
        }
    return 0;
}
