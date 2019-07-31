#include<iostream>
#define ull   unsigned long long
using namespace std;
ull n,m=1000000007;
ull ModEx(ull x,ull n)
{
    if(n==0) return 1;
    if(n%2==0) return ModEx((x*x)%m,n/2);
    else return (x*ModEx((x*x)%m,n/2))%m;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ModEx(2,n)-1<<endl;
    }
    return 0;
}
