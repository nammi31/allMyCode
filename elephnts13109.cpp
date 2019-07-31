#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,mxW,arr[100002];
    cin>>t;
    while(t--){
       cin>>n>>mxW;
       for(i=0;i<n;i++)
        cin>>arr[i];

       sort(arr,arr+n);
       int sum=0,cnt=0;
       for(i=0;i<n;i++){
           sum+=arr[i];
           if(sum<mxW) cnt++;
           else  break;
       }
       cout<<cnt<<endl;
    }
    return 0;
}
