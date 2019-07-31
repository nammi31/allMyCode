#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,r,i,j,m[105],e[105];
    while(cin>>n>>d>>r && (n|d|r)){
        for(i=0;i<n;i++)
            cin>>m[i];
        for(i=0;i<n;i++)
            cin>>e[i];
        sort(m,m+n);
        sort(e,e+n);
        int pay=0,sm;
        for(i=0;i<n;i++){
            sm=m[i]+e[n-i-1];
            if(sm>d) pay+=(sm-d)*r;
        }
        printf("%d\n",pay);
    }
    return 0;
}

