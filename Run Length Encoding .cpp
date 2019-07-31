#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define pfc(ch)      printf("%c",ch)
#define pfn         printf("\n")
#define pf(x)       printf("%d",x)
using namespace std;
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        char s[103];
        sfs(s);
        int cnt=1;
        for(int i=0; s[i]; i++){
            if(s[i]==s[i+1])   cnt++;
            else{
                pf(cnt);
                pfc(s[i]);
                cnt=1;
            }
        }
        pfn;
    }
    return 0;
}
