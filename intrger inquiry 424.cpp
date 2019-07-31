             /// number theory
#include<bits/stdc++.h>
using namespace std;
string rev(string s)  //12345
{
    int i;
    string r="";
    for(i=s.length()-1;i>=0;i--)
        r+=s[i];
    return r;  //54321
}
string add(string s1,string s2)
{
    string tp;
    int ln1=s1.length(),ln2=s2.length();
    if(ln1<ln2)  // 667 67789
    {
        tp=s1;
        s1=s2;
        s2=tp;   //67789 667
    }
    int i,j,sm,crry=0;
    string ans="";
    for(i=s1.length()-1,j=s2.length()-1;i>=0; i--,j--){
          if(j>=0)  sm=(s1[i]-48)+(s2[j]-48)+crry;
          else    sm=(s1[i]-48)+crry;
        ans+=(sm%10+48);
        crry=sm/10;
    }
    if(crry==1) ans+='1';
    return ans;
}
int main()
{
    string sm="0",s;
    while(cin>>s && s!="0"){
       sm=rev(add(s,sm));
    }
    cout<<sm<<endl;
    return 0;
}
