#include<stdio.h>
int find_sum(int a[],int n);
int main()
{
    int n,i,arr[100],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=find_sum(arr,n);
    printf("sum:%d",sum);
    return 0;
}
int find_sum(int a[],int n)
{

    if( n==0)
        return 0;
   return a[n-1]+find_sum(a,n-1);
}
