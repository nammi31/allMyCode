#include<bits/stdc++.h>
#define pf1(x)      printf("%lld\n",x)
#define ll          long long
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int ln=s.size();
        ll ans=0,heavy=0;
        for(int i=0; i<ln-4; i++) {
            if(s[i]=='h'&& s[i+1]=='e'&& s[i+2]=='a'&& s[i+3]=='v'&& s[i+4]=='y') { heavy++; i+=4; }
            if(s[i]=='m'&& s[i+1]=='e'&& s[i+2]=='t'&& s[i+3]=='a'&& s[i+4]=='l') { ans+=heavy; i+=4; }
        }
        pf1(ans);
    }
    return 0;
}
