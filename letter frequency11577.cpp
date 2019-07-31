#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int t,i,j;
    cin>>t;
    getchar();
    while(t--){
        getline(cin,s);
        int cnt[26]={0},mx=0;
        for(i=0; s[i] ;i++){
           if( isalpha(s[i]) ){
             ch=tolower(s[i]);
             j=ch-97;
             cnt[j]++;
            if(cnt[j]>mx) mx=cnt[j];
          }
        }
        for(j=0;j<26;j++)
            if(cnt[j]==mx) {
              ch=j+97;
              cout<<ch;
            }
       cout<<endl;
    }
    return 0;
}
