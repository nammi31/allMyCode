
#include<bits/stdc++.h>
#define   sf1(x)   scanf("%d",&x)
#define   pb  push_back
#define   FOR(i,x)    for(int i=0;i<x;i++)
#define   pfn         printf("\n")
using namespace std;
int main()
{
    vector<int>v;
    int n;
    sf1(n);
    char ch;
    for(int i=0;i<n;i++){
        cin>>ch;
        int nm=ch-48;
        if(nm==0 || nm==1) continue;
        else if(nm==2 || nm==3 || nm==5|| nm==7) v.pb(nm);
        else if(nm==4) { v.pb(3); v.pb(2); v.pb(2);}
        else if(nm==6){ v.pb(5);  v.pb(3);}
        else if(nm==8) {v.pb(7); FOR(i,3) v.pb(2);}
        else if(nm==9) { v.pb(7); v.pb(3); v.pb(3);  v.pb(2); }
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--) cout<<v[i];
    pfn;
    v.clear();
    return 0;
}

