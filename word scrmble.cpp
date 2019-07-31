#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int i,j,a=0;
        int len=s.length();
        for(i=0; i<len-1;i++){
          if(s[i]==' '){
             for(j=i-1; j>=a;j--)
                cout<<s[j];
            cout<<" ";
            a=i+1;
          }
        }
       for(j=len-1;j>=a ;j--)
           cout<<s[j];
       cout<<endl;
    }
    return 0;
}
