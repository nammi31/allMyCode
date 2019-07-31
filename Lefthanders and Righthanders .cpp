#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x+1)
#define pf2(x,y)    printf("%d %d\n",x,y)
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char s[103];
    int n;
    while(sf1(n)==1){
        sfs(s);
        n/=2;
        for(int i=1; i<=n; i++){
            if(s[i]=='R'&& s[i+n]=='L') pf2(i+n,i);
            else pf2(i,i+n);
        }
    }
    return 0;
}
