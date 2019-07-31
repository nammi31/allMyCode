#include<bits/stdc++.h>
#define mx 10000000
using namespace std;
int isprime[mx];
int main()
{
    int i,j;
    for(i=2;i<mx;i++)  isprime[i]=1;
    vector<int>p;
    for(i=2;i<mx;i++){
        if(isprime[i]){
             p.push_back(i);
            for(j=2;i*j<mx;j++)
                isprime[i*j]=0;
        }
    }
    int n;
    while(cin>>n && n){
        int cnt=0;
        for(i=0;p[i]<=n; i++)
             if( n%p[i] ==0) cnt++;
        cout<<n<<" : "<<cnt<<endl;
    }

    return 0;
}
