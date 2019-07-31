#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    while(1){
        cin>>s;
        if(s==".") break;
        cin>>n;
        string total="",ans1,ans2;
        int ln=s.length();
        for(int i=0; i<n-1; i++) total+=s;

        for(int i=0; s[i]; i++){
          ans1=s.substr(i,ln);
          ans2=s.substr(0,i);
        cout<<ans1+total+ans2<<endl;
     }
    }
    return 0;
}
