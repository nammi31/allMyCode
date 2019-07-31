#include<bits/stdc++.h>
using namespace std;
#define mx 1000010
int a[mx];
vector<int>ans[mx];
int main()
{
     int n,m,k,sn,i;
     while(cin>>n>>m){
     for(i=0;i<mx;i++)
        ans[i].clear();

     for(i=0;i<n;i++){
        cin>>a[i];
        ans[a[i]].push_back(i+1);
     }
     for(i=0;i<m;i++){
        cin>>k>>sn;
        if(ans[sn].size()<k) cout<<"0\n";
        else  cout<<ans[sn][k-1]<<endl;
     }
   }
   return 0;
}
