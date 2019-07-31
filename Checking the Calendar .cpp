#include<bits/stdc++.h>
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char days[7][15]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int m;
        for(int i=0; i<7; i++){
            if(days[i]==s1) m=i;
        }
        char posi=0;
        if(days[(m+28)%7]==s2) posi=1;
        else if(days[(m+30)%7]==s2) posi=1;
        else if(days[(m+31)%7]==s2) posi=1;
        pfs((posi)?"YES":"NO");
    }
    return 0;
}
