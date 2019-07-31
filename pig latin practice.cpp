#include<bits/stdc++.h>
using namespace std;
int isvowel(char ch)
{
    ch=tolower(ch);
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='u')
        return 1;
    return 0;
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        int i,j,st=0;
       for(i=0; s[i];i++){
          if(s[i]==' '|| s[i]=='.' ||){
            if(isvowel(s[st])){
                for(j=st;j<i;j++)
                    cout<<s[j];
                cout<<"ay";
              }
            else if(!isvowel(s[st])){
                for(j=st+1; j<i;j++)
                    cout<<s[j];
                cout<<s[st]<<"ay";
            }
            st=i+1;
            cout<<s[i];
          }

          }
        }
        cout<<endl;
    }
    return 0;
}
