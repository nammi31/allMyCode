#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x){
        int cnt=0,i;
        for(i=1; i<=x;i++){
            if(i>n) break;
            if(x%i==0){
                if(i<=n && (x/i)<=n )
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
