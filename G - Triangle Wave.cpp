#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
      cin>>n>>m;
      while(m--){
         int i,j;
         for(i=1; i<=n; i++){
            for(j=1; j<=i; j++)
               cout<<i;
          cout<<endl;
          }
         for(i=n-1; i>=1; i--){
            for(j=1; j<=i; j++)
               cout<<i;
            cout<<endl;
         }
         if(m||t )
            cout<<endl;
      }
    }
    return 0;
}
