#include<stdio.h>
int find_max(int arr[],int n);
int main()
{
    int arr[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int max,n=11;
    max=find_max(arr,n);
    printf("Maximum of numbers:%d\n",max);
    return 0;
}
int find_max(int arr[],int n)
{
   int max=arr[0];
   int i;
   for(i=1;i<n;i++){
    if(arr[i]>max)
        max=arr[i];
   }
   return max;
}
