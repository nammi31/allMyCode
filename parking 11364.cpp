#include<iostream>
using namespace std;
int main()
{
    int t,n,a[22];
    cin>>t;
    while(t--){
        cin>>n;
        int mn=100,mx=-1;
        for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]<mn) mn=a[i];
           if(a[i]>mx) mx=a[i];
        }
        int ans=2*(mx-mn);
        cout<<ans<<endl;
    }
    return 0;
}
