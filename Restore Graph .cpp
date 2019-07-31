
/*
8 3
2 0 1 1 2 3 1 2

8 3
2 0 1 1 2 3 1 1

3 2
0 1 0
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
#define mp          make_pair
using namespace std;
vector<int>dis[100003];
vector<pair<int,int> >ans;
int main()
{
    int n,k,a,mx=-1;
    sf2(n,k);
    FOR1(i,n){
        sf1(a);
        if(a>mx) mx=a;
        dis[a].pb(i);
    }
    if(dis[0].size()!=1){ pf("-1"); return 0;}
    FOR1(i,mx){
        int adj=(i!=1),c=0;
        FOR(j,dis[i].size()){
            if(adj==k) adj=(i!=1),c++;
            if(c==dis[i-1].size()) {pf("-1\n"); return 0;}
            ans.pb(mp(dis[i-1][c],dis[i][j]));
            adj++;
        }
    }
    pf1(n-1);
    FOR(i,ans.size()) pf2(ans[i].first,ans[i].second);
    return 0;
}
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define pb          push_back
#define ll          long long
using namespace std;
vector<int>dis[100003];
vector<pair<int,int> >ans;
int main()
{
    int n,k,mx=-1,a;
    sf2(n,k);
    FOR1(i,n){
        sf1(a);
        if(a>mx) mx=a;
        dis[a].pb(i);
    }
    if(dis[0].size()!=1){ pf("-1\n"); return 0;}
    FOR1(i,mx){
       int  m =(i==1)? k: k-1;
       if(dis[i].size()==0 || (i!=1 && (ll)(dis[i].size())>(ll)(dis[i-1].size()*m))){ pf("-1\n"); return 0;}
       int adj=0,c=0;
        FOR(j,dis[i].size()){
            if(adj==m){ c++,adj=0; }
          ans.pb(make_pair(dis[i-1][c],dis[i][j]));
          adj++;
        }
    }
    pf1(n-1);
    FOR(i,ans.size()) pf2(ans[i].first,ans[i].second);
    return 0;
}
*/
