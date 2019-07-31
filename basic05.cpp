#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i,j=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[1005],sm=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) sm+=a[i];
        }
        printf("Case %d: %d\n",j++,sm);
    }
    return 0;
}
