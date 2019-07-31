#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    int t,j=1,i;
    cin>>t;
    getchar();
    while(t--){
        getline(cin,s);
        getline(cin,ans);
        cout<<"Case "<<j++<<": ";
        if(s==ans) cout<<"Yes\n";
        else{
             string cpy="";
             for(i=0; i<s.length() ;i++)
                if(s[i]!=' ') cpy+=s[i];
             int wrong=0;
             for(i=0; ans[i];i++)
                if(ans[i]!=cpy[i]) wrong=1;

             if(wrong) cout<<"Wrong Answer\n";
             else cout<<"Output Format Error\n";
        }
    }
    return 0;
}
