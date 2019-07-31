#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,lim;
    int j=1;
    while(cin>>n>>lim){
        if(n<0 && lim<0) break;
        long long  x=n,cnt=0;
        while(n<=lim){
            cnt++;
            if(n==1) break;
            if(n%2) n=3*n+1;
            else n/=2;

        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",j++,x,lim,cnt);
    }
    return 0;
}
