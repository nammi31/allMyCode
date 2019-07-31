#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10002];
    while(cin>>n && n){
        int sm=0,mx=0,i;
        for(i=0;i<n;i++){
            cin>>a[i];
            sm+=a[i];
            if(sm<0) sm=0;
            if(sm>mx)  mx=sm;
        }
        if(mx>0) cout<<"The maximum winning streak is "<<mx<<".\n";
        else   cout<<"Losing streak.\n";
    }
    return 0;
}
