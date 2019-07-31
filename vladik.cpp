#include<bits/stdc++.h>
#define sf3(x,y,z)   scanf("%d %d %d",&x,&y,&z)
#define pf1(x)   printf("%d\n",x)
using namespace std;
int main()
{
    int n,st,ed;
    char s[100005];
    while( sf3(n,st,ed)==3 )
    {
        scanf("%s",s);
        int ans=abs((s[st-1]-'0')-(s[ed-1]-'0')); //dif nilam
        pf1(ans);
    }
    return 0;
}
