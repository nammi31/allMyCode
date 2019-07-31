#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,mx,frnt[12],able[12];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>mx;
        int j,sum=0,flag=1;
        for(j=0;j<n;j++){
            cin>>frnt[j];
            sum+=frnt[j];
        }
        for(j=0;j<n;j++){
            cin>>able[j];
            flag&=(able[j]>=frnt[j]);
        }
        cout<<"Case "<<i<<": ";
        if(flag && sum<=mx) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

