#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfn         printf("\n")
using namespace std;
int main()
{
    int t;
    char line=0;
    sf1(t);
    while(t--){
        if(line)  pfn;
        line = 1;
        getchar();
        string place;
        getline(cin,place);
        stringstream ss(place);
        int pos,n=1;
        string s[100005];
        while(ss >> pos){ cin>>s[pos]; n++;   }
        for(int i=1; i<n; i++) cout<<s[i]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfn          printf("\n")
#define FOR(i,x)    for(int i=0;i<x;i++)
#define pb          push_back
using namespace std;
int main()
{
    vector<pair<int,string> > store;
    char line=0;
    int t;
    sf1(t);
    getchar();
    while(t--)
    {
        getchar();
        string place,arry;
        getline(cin,place);
        getline(cin,arry);
        stringstream ss1(place),ss2(arry);
        int pos;
        string value;
        while(ss1>>pos){
            ss2>>value;
            store.pb(make_pair(pos,value));
        }
        sort(store.begin(),store.end());
        if(line) pfn;
        line=1;
        FOR(i,store.size()) cout<<store[i].second<<endl;
        store.clear();
    }
    return 0;
}
