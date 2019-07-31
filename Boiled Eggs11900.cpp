#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mE,mW,w[32],i,j=1,a,ans;
    cin>>t;
    while(t--){
        cin>>n>>mE>>mW;
        for(i=0;i<n;i++)
            cin>>w[i];
        sort(w,w+n);
        if(mE>=n) a=n;
        else  a=mE;
        int sm=0;
        for(i=0;i<a;i++){
            sm+=w[i];
            if(sm>mW) break;
        }
        if(sm>mW) ans=i;
        else if(i==a) ans=a;
        cout<<"Case "<<j++<<": "<<ans<<endl;
    }
    return 0;
}
