/*#include<bits/stdc++.h>
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    string s,sub,ss;
    cin>>s>>sub;
    int ln=sub.size(),cnt=0;
    for(int i=0; s[i]; i++){
        if(s[i]==sub[0]){
            ss=s.substr(i,ln);
            i=i+ln-1;
            if(ss==sub) cnt++;
        }
    }
    pf1(cnt);
    return 0;
}
/*
intellect
tell

google
apple

sirisiri
sir
*/
#include<bits/stdc++.h>
#define pf1(x)      printf("%d\n",x)
#define sf2(x,y)    scanf("%s%s",x,y)
using namespace std;
int main()
{
    char s[100003],sub[33],ss[33];
    sf2(s,sub);
    int ln=strlen(sub),cnt=0,j;
    for(int i=0; s[i]; i++){
        if(s[i]==sub[0]){
            for(j=0; j<ln; j++)
                if(s[i+j]!=sub[j]) break;
            if(j==ln){ cnt++; i=i+ln-1;}
        }
    }
    pf1(cnt);
    return 0;
}
