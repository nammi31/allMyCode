#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s[10]={" ",".,?\"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int t,n,i,key[102],pr[102];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>key[i];
        string ans="";
        for(i=0;i<n;i++){
            cin>>pr[i];
            ans+=s[key[i]][pr[i]-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}
