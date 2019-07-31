
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d && (a|b|c|d)){
       int ans=1080;
       if(a<b) ans+=(40+a-b)*9;
        else ans+=(a-b)*9;
        if(b>c)  ans+=(40+c-b)*9;
        else ans+=(c-b)*9;
        if(c<d) ans+=(40+c-d)*9;
        else ans+=(c-d)*9;
        cout<<ans<<endl;
    }

    return 0;
}
