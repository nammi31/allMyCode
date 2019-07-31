#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int r;
    while(a!=0){
        r=b%a;
        b=a;
        a=r;
    }
    return b;
}

int main()
{
    int n;
    while(cin>>n && n){
        int sum=0,i,j;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                sum+=gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
