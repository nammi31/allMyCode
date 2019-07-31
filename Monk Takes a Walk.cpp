#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int isvowel(char ch)
{
    ch=tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.length(),cnt=0;
        FOR(i,ln)  if(isvowel(s[i]))  cnt++;
        pf1(cnt);
    }
    return 0;
}
