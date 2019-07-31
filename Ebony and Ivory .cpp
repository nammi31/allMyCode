#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<=x;i++)
using namespace std;
int main()
{
    int a,b,n;
    while(sf3(a,b,n)==3){
        char p=0;
        FOR(i,n/a){
            FOR(j,n/b){
                if(a*i+b*j==n){
                    p=1;
                    break;
                }
            }
            if(p) break;
        }
       pfs((p)?"Yes":"No");
    }
    return 0;
}
