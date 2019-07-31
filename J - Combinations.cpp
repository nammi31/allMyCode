#include<bits/stdc++.h>
#define mx 100000
using namespace std;
int a[1000000][1000000]={0};
int ncr(int n, int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(a[n][r]!=0) return a[n][r];
    else{
        a[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        return a[n][r];
    }
}
int main()
{
    int t,n,r;
    cin>>t;
    while(t--){
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
    }
    return 0;
}
