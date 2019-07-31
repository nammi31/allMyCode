#include<stdio.h>
int main()
{
    int n,ans,i,j=1,arr[1005];
    while(scanf("%d",&n)==1){
        if(n==0)
          break;
        int count=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                count++;
        }
        ans= n-2*count;
        printf("Case %d: %d\n",j++,ans);
    }
    return 0;
}
