#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int r=0,n,i;
        for(i=0; s[i]; i++){
            n= r*10 + (s[i]-48);
            r=n%5;
        }
        cout<<r<<endl;
        if(r==4) printf("4\n");
        else printf("0\n");
    }
    return 0;
}
