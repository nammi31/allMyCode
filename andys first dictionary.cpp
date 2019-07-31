#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>dic;
    string s;
    while(cin>>s  && s!="0"){
        int i,ln=s.length();
        string a="";
        for(i=0;i<ln;i++)
            if(isalpha(s[i]))  a+=tolower(s[i]);
        dic.insert(a);
        a.clear();
    }
    set<string>::iterator it;
    for(it=dic.begin(); it!=dic.end(); it++)
          cout<<*it<<endl;
    return 0;
}
