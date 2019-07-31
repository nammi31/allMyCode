#include<bits/stdc++.h>
using namespace std;
int isvowel(char ch)
{
    ch=tolower(ch);
    if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'||ch=='u')
        return 1;
    return 0;
}
int main()
{
    string s;
    while(getline(cin,s)){
            string ans="";

        for(int i=0 ;i<=s.length();i++)
        {
            if(isalpha(s[i])) ans+=s[i];
            else{                       ///space or . or null
                 if(isvowel(ans[0] )) cout<<ans<<"ay";
                 else {
                    for(int j=1; ans[j];j++) cout<<ans[j];
                    cout<<ans[0]<<"ay";

                  }
              if(s[i]!='\0')
              cout<<s[i];
              ans.clear();
           }
        }
        cout<<endl;
    }
    return 0;
}
