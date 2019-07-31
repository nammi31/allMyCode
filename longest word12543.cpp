#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    int mxl=0;
    while(cin>>s){
        if(s=="E-N-D") break;
        int len=0;
        for(int i=0;s[i];i++)
            if(isalpha(s[i]) || s[i]=='-')  len++;

        if(len>mxl){
            mxl=len;
            ans=s;
        }
    }
    for(int i=0;ans[i];i++){
        ans[i]=tolower(ans[i]);
        if(isalpha(ans[i])|| ans[i]=='-') cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
