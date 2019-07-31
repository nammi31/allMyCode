#include<bits/stdc++.h>
using namespace std;
int flag[10000000];
int main()
{
    int n,m,i,j,x,y;
    while(cin>>n>>m && (n|m)){
        memset(flag,0,sizeof(flag));
        for(i=0;i<n;i++){
            cin>>x;
            flag[x]=1;
        }
        int cnt=0;
        for(j=0;j<m;j++){
            cin>>y;
            if(flag[y]==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
