#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],i;
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}
