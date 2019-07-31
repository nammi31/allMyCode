#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    map<string,int>mp;
    vector<string>org;
    vector<string>se;
    string s;
    int n;
    sf1(n);
    FOR(i,n){
        cin>>s;
        org.pb(s);
        mp[s]=i+1;
    }
    FOR(i,n){
        cin>>s;
        se.pb(s);
        mp[s]=i+1;
    }
    sort(org.begin(),org.end());
    sort(se.begin(),se.end());
    FOR(i,n){
        cout<<mp[org[i]]<<" "<<mp[se[i]]<<endl;
    }
    return 0;
}
