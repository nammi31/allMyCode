#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<2) return 1;
    return fibo(n-1)+fibo(n-2);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
    return 0;
}
