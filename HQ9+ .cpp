#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s[105],found=0;
    sfs(s);
    for(int i=0; s[i]; i++)
        if(s[i]=='H' || s[i]=='Q'|| s[i]=='9') found=1;
    pfs((found)?"YES":"NO");
    return 0;
}
