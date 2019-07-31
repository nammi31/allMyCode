#include<bits/stdc++.h>
using namespace std;
int recurse(int x,int i,int n)
{
    if(i<n)
        return pow(x,i)+recurse(x,i+1,n);
    return 0;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int  ans=recurse(x,0,n);
    cout<<ans<<endl;
    return 0;
}
