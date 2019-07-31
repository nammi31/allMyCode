/*
ID: sustnam1
PROG: gift1
LANG: C++
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfn         printf("\n")
#define pf1(x)      printf("%d\n",x)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
using namespace std;
int main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    string s[103],giver,rcver;
    map<string,int>ans;
    int n,k=1,bdg,d;
    while(sf1(n)==1){
        FOR1(i,n){
           cin>>s[i];
           ans[s[i]]=0;
        }
        int amount,cost;
        FOR1(i,n){
           cin>>giver;
           sf2(bdg,d);
           if(d){
             amount=bdg/d;
             cost= amount*d;
             ans[giver]-=cost;
             FOR1(i,d){
                 cin>>rcver;
                 ans[rcver]+=amount;
             }
           }
        }
        if(k!=1)   pfn;
        FOR1(i,n) {
            cout<<s[i]<<" ";
            pf1(ans[s[i]]);
        }
        k++;
    }
    return 0;
}
