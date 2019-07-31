#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        int ans=(-1+sqrt(1+8*n))/2;
        cout<<ans<<endl;
    }
    return 0;
}
