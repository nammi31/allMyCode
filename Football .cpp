#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s[103],danger=0,cnt=1;
    sfs(s);
    for(int i=0; s[i]; i++){
        if(s[i]==s[i+1]) cnt++;
        else{
            if(cnt>=7) danger=1;
            else cnt=1;
        }
    }
    pfs((danger)?"YES":"NO");
    return 0;
}
