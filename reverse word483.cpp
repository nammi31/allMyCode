#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    while(getline(cin,s)){
        int x,a=0,j,len;
        len=s.length();
        for(i=0;i<len;i++){
            if(s[i]==' '){
                for(j=i-1; j>=a; j--)
                   cout<<s[j];
                cout<<" ";
                a=i+1;
            }
        }
        for(j=len-1;j>=a;j--)
            cout<<s[j];
        cout<<endl;
    }
    return 0;
}
