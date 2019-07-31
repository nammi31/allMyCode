#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n==1) return 1;
    else return n*fact(n-1);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}
