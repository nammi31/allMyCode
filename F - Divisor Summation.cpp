#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    while(t--){
         cin>>n;
         int sm=0;
         for(i=1;i*i<n;i++){
            if(n%i==0)
                sm+=(i+n/i);
         }
         if(i*i==n) sm+=i;
         sm-=n;
         cout<<sm<<endl;
    }
         return 0;
}
