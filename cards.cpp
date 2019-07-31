#include<bits/stdc++.h>
using namespace std;
int print[105];
int main()
{
    int n,a[105],i,j;
    while(cin>>n){
        int sm=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            print[i]=0;
            sm+=a[i];
        }
        int avg=sm*2/n;
        int c=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
              if( !print[i] && !print[j]){
                if( a[i]+a[j] ==avg ){
                    print[i]=1;
                    print[j]=1;
                    cout<<i+1<<" "<<j+1<<endl;
                     break;
                }
              }
            }
        }
    }
    return 0;
}
