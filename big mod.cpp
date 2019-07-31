#include<bits/stdc++.h>
#define sfs(x)      scanf("%s\n",x)
using namespace std;
char s[1000005];
int main()
{
    sfs(s);
    int ln =strlen(s);
    int sm = (s[ln-2]-'0')*10+ s[ln-1]-'0';
    if(sm%4==0) puts("4");
    else  puts("0");
    return 0;
}
