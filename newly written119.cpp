#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<string.h>
#include<sstream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    int n,bdg,d,amount,cost,i,j,k;
    string s[12],giver,rcver;
    map<string,int>ans;
    k=1;
    while(cin>>n){
        for(i=1;i<=n;i++){
            cin>>s[i];
            ans[s[i]]=0;
        }
        for(i=1;i<=n;i++){
            cin>>giver;
            cin>>bdg>>d;
            if(d!=0){
                amount=bdg/d;
                cost=d*amount;
                ans[giver]-=cost;
                for(j=1;j<=d;j++){
                    cin>>rcver;
                    ans[rcver]+=amount;
                }
            }
        }
        if(k!=1) cout<<endl;
        for(i=1;i<=n;i++){
            cout<<s[i]<<" "<<ans[s[i]]<<endl;
        }
        k++;
    }
    return 0;
}
