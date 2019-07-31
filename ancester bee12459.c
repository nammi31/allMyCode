#include<stdio.h>
int main()
{
    int n,i;
    long long int arr[85];
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        arr[0]=1;
        arr[1]=2;
        for(i=2;i<=n-1;i++)
            arr[i]=arr[i-1]+arr[i-2];

        printf("%lld\n",arr[n-1]);
    }
    return 0;
}
