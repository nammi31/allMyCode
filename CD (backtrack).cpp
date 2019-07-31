
#include<bits/stdc++.h>
using namespace std;

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++ )
#define N 21
typedef unsigned long long ull;

int tc[N];
bool t[N],cp[N];
int n;
ull TC,ans;

void BackTrack(int label){
    if(label==n){
        ull tmp=0;
        for(int i=0;i<n;i++)if(t[i]) tmp +=tc[i];
        if(tmp<=TC) {
            if(ans<tmp){
            ans = max(ans,tmp);
            for(int i=0;i<n;i++)cp[i]=t[i];
            }
        }
        return;
    }
    t[label] = true;
    BackTrack(label+1);
    t[label] = false;
    BackTrack(label+1);
}
int main()
{
    while(cin>>TC){
        scanf("%d",&n);
        FOR(i,0,n-1)scanf("%d",&tc[i]);
        ans=0;
        FOR(i,0,n-1)cp[i]=false;
        BackTrack(0);

        FOR(i,0,n-1)if(cp[i])printf("%d ",tc[i]);
        cout <<"sum:" <<  ans << endl;
    }
	return 0;
}
