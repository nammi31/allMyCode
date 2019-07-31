#include<stdio.h>
int a[20];
int fibo(int n)
{
    if(n==0 || n==1) return 1;
    else if(a[n]==0)
        a[n]=fibo(n-1)+fibo(n-2);
        return a[n];


}
int main()
{
     int nm;
     scanf("%d",&nm);
     printf("%d\n",fibo(nm));
      return 0;
}
