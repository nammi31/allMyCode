#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        int sum=0;
        for( i=1;i<=n ; i++){
            sum+=i;
            if(sum==n){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i>n)
            cout<<"NO"<<endl;
    }
    return 0;
}
