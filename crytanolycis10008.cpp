#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,j,cnt[26]={0},mx=0;
     string s;
     char ch;
     cin>>t;
     getchar();
     while(t--){
        getline(cin,s);
        for(i=0; s[i] ;i++){
          ch=toupper(s[i]);
          if(ch>='A' && ch<='Z'){
             j=ch-65;
             cnt[j]++;
             if(cnt[j]>mx)
               mx=cnt[j];
          }
       }
     }
     for(i=mx;i>=1;i--){
        for(j=0;j<26;j++){
            if(cnt[j]==i){
               ch=j+65;
               cout<<ch<<" "<<i<<endl;
            }
        }
     }
    return 0;
}

