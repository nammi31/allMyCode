
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char punc=1;
    while(getline(cin,s)){
        for(int i=0; s[i]; i++){
            if(isalpha(s[i])){
                if(punc) punc=0;
                else  s[i]=tolower(s[i]);
            }
            else if(s[i]=='.'|| s[i]=='?'|| s[i]=='!'){
                   punc=1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
