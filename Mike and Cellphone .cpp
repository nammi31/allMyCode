#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    int n;
    char ch[12];
    while(sf1(n)==1)
    {
        getchar();
        int a=0,b=0,c=0,d=0;
        for(int i=0; i<n; i++)
        {
            scanf("%c",&ch[i]);
            if(ch[i]=='1'||ch[i]=='2'||ch[i]=='3') a=1;
            if(ch[i]=='1'||ch[i]=='4'||ch[i]=='7'||ch[i]=='0') b=1;
            if(ch[i]=='3'||ch[i]=='6'||ch[i]=='9'||ch[i]=='0') c=1;
            if(ch[i]=='7'||ch[i]=='0'||ch[i]=='9'||ch[i]=='0') d=1;
        }
        pfs((a&&b&&c&&d)?"YES":"NO");
    }

    return 0;
}
