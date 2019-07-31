#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    while(cin>>n>>m>>c && (n|m|c)){
        int extra,ans;
        extra=(n-7)*(m-7);
        ans=extra/2;
        if(extra%2==1 && c==1)
          ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}
