
#include<bits/stdc++.h>
using namespace std;
int arr[400000000];
int main()
{
    long int n,i;
    while(cin>>n){
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        for(i=0;i<n;i++){
           cout<<arr[i];
           if(i!=(n-1))
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
