#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfs(x)      printf("%s\n",x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,m;
    while(sf2(n,m)==2){
        map<string,int>mp;
        mp.clear();
        string s1[n],s2[m];
        FOR(i,n) { cin>>s1[i]; mp[s1[i]]++;}
        int invalid=0;
        FOR(i,m) { cin>>s2[i]; if(mp[s2[i]]>0) invalid++; }
        pfs((n+invalid%2>m)?"YES":"NO");
    }
    return 0;
}
/*
5 1
polandball
is
a
cool
character
nope

2 2
kremowka
wadowicka
kremowka
wiedenska

3 5
hlw
mam
how
mam
hlw
how
its
ok
right
*/
