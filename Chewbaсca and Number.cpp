#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pfs(x)     printf("%s\n",x)
using namespace std;
int main()
{
    char s[21];
    sfs(s);
    char mn=s[0];
    for(int i=1; s[i]; i++){
        if(s[i]>mn) s[i]=mn;
        else mn=s[i];
    }
    pfs(s);
    return 0;
}
