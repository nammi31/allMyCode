#include<bits/stdc++.h>
using namespace std;
int a[20]={0};
int fibo(int n)
{
    if(n==0|| n==1)  return n;
    if(a[n]) return a[n];
    else{
        a[n]=fibo(n-1)+fibo(n-2);
        return a[n];
    }
}
int main()
{
    int n;
    while(cin>>n)
    printf("%d\n",fibo(n));
    return 0;
}
