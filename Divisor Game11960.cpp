#include<bits/stdc++.h>
using namespace std;
const int  mN=100000000;
int divcnt[mN+1],ans[mN+1];
int main()
{
    int i,j;
    for(i=1; i<=mN; i++){
        for(j=i; j<=mN; j+=i)
            divcnt[j]++;
    }
    int mx=0,most_d=0;
    for(i=1; i<=mN;i++){
        if(divcnt[i]>=mx){
            mx=divcnt[i];
               most_d=i;
        }
        ans[i]=most_d;
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
