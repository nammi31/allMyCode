#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main()
{
    int t,a,b,sm;
    cin>>t;
    while(t--){
        cin>>a>>b;
        sm=rev(a)+rev(b);
        cout<<rev(sm)<<endl;
    }
    return 0;
}
