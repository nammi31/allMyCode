#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    while(cin>>n>>r && (n|r)){
        if(n-r<r) r=n-r;
        unsigned  long long com=1;
        for(int i=1;i<=r;i++,n--)
            com=(com*n)/i;

        cout<<com<<endl;
    }
    return 0;
}



