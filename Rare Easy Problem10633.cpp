#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,x;
    while(cin>>n && n){
        x=10*n/9;
        if(n%9==0) cout<<x-1<<" "<<x<<endl;
        else  cout<<x<<endl;
    }
    return 0;
}
