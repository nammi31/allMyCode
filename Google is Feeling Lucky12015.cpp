#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[10];
    int t,n[10],i,j=1;
    cin>>t;
    while(t--){
        int mx=0;
        for(i=0;i<10;i++){
           cin>>s[i]>>n[i];
           if(n[i]>mx) mx=n[i];
        }
        cout<<"Case #"<<j++<<":\n";
        for(i=0;i<10;i++){
            if(n[i]==mx)
                cout<<s[i]<<endl;
        }
    }
    return 0;
}

