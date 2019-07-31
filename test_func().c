#include<stdio.h>
test_func(int arr[]);
int main()
{
    int arr[]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    test_func(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    return 0;
}
test_func(int arr[])
{
    arr[0]=100;
}
