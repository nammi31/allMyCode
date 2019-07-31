#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,a,b,c;
    while(cin>>p>>a>>b>>c && (p|a|b|c)){
        int ans=1080;
        if(b>a) ans+=(b-a)*9;
       else  ans+=(40+b-a)*9;
       if(b>c) ans+=(b-c)*9;
       else  ans+=(40+b-c)*9;
       if(d>c) ans+=(d-c)*9;
       else  ans+=(40+d-c)*9;
       cout<<ans<<endl;

       if(b>a) ans+=(40+a-b)*9;
        else ans+=(a-b)*9;
        if(b>c)  ans+=(40+c-b)*9;
        else ans+=(c-b)*9;
        if(c<d) ans+=(40+c-d)*9;
        else ans+=(c-d)*9;
        cout<<ans<<"\n";
    }

    return 0;
}
