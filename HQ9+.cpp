#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        char found=0;
        for(int i=0; s[i];i++){
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')
            found=1;
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
