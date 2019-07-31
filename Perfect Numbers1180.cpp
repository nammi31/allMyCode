#include<bits/stdc++.h>
using namespace std;
int isprime(int nm)
{
    int d;
    for(d=2; d*d<=nm; d++)
        if(nm%d==0) break;

    if(d*d>nm && nm>1) return 1;
    return 0;
}
int main()
{
    int n,p,i;
    while(cin>>n){
        for(i=1;i<=n;i++){
            scanf("%d,",&p);
            char flag=0;
            if(isprime(p)){
               int q=pow(2,p)-1;
               if(isprime(q)) flag=1;
            }
            if(flag) cout<<"Yes\n";
           else cout<<"No\n";
        }
    }
    return 0;
}
