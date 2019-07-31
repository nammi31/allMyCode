#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a;
    cin>>t;
    while(t--){
        cin>>n;
        int count[10]={0};
        for(i=1;i<=n;i++){
           a=i;
           if(a<10)
                count[a]++;
           else{
               while(a){
                count[a%10]++;
                a/=10;
               }
           }
        }
        for(i=0;i<9;i++){
           cout<<count[i]<<" ";
        }
        cout<<count[9]<<endl;
    }
    return 0;
}
