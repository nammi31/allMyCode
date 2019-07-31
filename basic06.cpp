#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,j=1;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ans=a*4+19;
        if(a<b) ans+=(b-a)*4;
        else  ans+=(a-b)*4;
        printf("Case %d: %d\n",j++,ans);
    }
    return 0;
}

