#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin,s)){
      int i,j;
      for(i=0; s[i] ;i++){
         if(s[i]==' ') cout<<" ";
         for(j=0; ans[j]; j++){
             if(s[i]==ans[j])
                cout<<ans[j-1];
         }
      }
      cout<<endl;
    }
    return 0;
}
