#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int t,i;
    cin>>t;
    getchar();
    while(t--){
        gets(s);
        string ans="";
        for(i=0; s[i]; i++)
           if(s[i]!=' ') ans+=s[i];
        int sum=0,n;
        for(i=0; ans[i];i++){
            n=ans[i]-48;
            if(i%2) sum+=n;
            else{
                n=2*n;
                if(n<10) sum+=n;
                else sum+=(n%10 +(n/10)%10);
            }
        }
        if(sum%10)cout<<"Invalid\n";
        else cout<<"Valid\n";
    }
    return 0;
}
