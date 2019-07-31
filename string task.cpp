#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    while(cin>>s){
        string ans="";
        for(i=0; s[i];i++){
            s[i]=tolower(s[i]);
            if(!(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'|| s[i]=='u'|| s[i]=='y'))
                ans+=s[i];
        }
        for(i=0; ans[i];i++)
            cout<<"."<<ans[i];
        cout<<endl;
    }
    return 0;
}

