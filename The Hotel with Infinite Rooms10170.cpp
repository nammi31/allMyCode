#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d;
    while(cin>>s>>d){
        long long r=d-s;
        while(r>0){
            s=s+1;
            d=r;
            r=d-s;
        }
        if(r<=0)  cout<<s<<endl;
    }
    return 0;
}
