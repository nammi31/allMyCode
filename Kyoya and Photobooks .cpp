#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    char s[23];
    while(sfs(s)==1)
    {
        int ans=51+25*(strlen(s)-1);
        pf1(ans);
    }
    return 0;
}
