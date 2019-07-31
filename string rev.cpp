#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,rev="";
    int i,j;
    cin>>s;
    for(i=s.length()-1;i>=0;i--)
        rev+=s[i];
       cout<<rev<<endl;
    return 0;
}
