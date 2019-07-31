#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int d,n,r;
    char ch,zero;
    while(cin>>s>>ch>>d){
       string ans="";
       r=0, zero=1;
       for(int i=0; s[i];i++){
          n=r*10+(s[i]-'0');
          if(n/d) zero=0;
          if(!zero) ans+=(n/d+'0');
          r=n%d;
       }
       if(zero) ans="0";
       if(ch=='/') cout<<ans<<endl;
       else  cout<<r<<endl;
   }
    return 0;
}
