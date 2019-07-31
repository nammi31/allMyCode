#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    int n,m;
    sf2(n,m);
    int dif=abs(n-m);
    if(dif<=1){
        if(n==0 && m==0) puts("NO");
        else puts("NO");
    }
    else puts("NO");
    return 0;
}
