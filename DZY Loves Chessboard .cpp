#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfn          printf("\n")
#define pfc(x)      printf("%c",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,m;
    sf2(n,m);
    string  s[105];
    FOR(i,n) cin>>s[i];
    FOR(i,n){
        FOR(j,m){
            if(s[i][j]=='.'){
                if((i+j)%2==0) s[i][j]='B';
                else s[i][j]='W';
            }
        }
    }
    FOR(i,n){
       FOR(j,m) pfc(s[i][j]);
        pfn;
    }
    return 0;
}
