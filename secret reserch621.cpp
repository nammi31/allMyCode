
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len;
    string s;
    cin>>t;
    while(t--){
       cin>>s;
       len=s.length();
       if(s=="1"|| s=="4"|| s=="78")
         cout<<"+";
       else if(s[len-2]=='3'&& s[len-1]=='5')
         cout<<"-";
       else if(s[0]=='9' && s[len-1]=='4')
         cout<<"*";
       else if(s[0]=='1' && s[1]=='9'&& s[2]=='0')
         cout<<"?";
       cout<<endl;

    }
    return 0;
}
