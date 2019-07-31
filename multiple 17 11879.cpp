#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        if(s=="0") break;
        int i,n,r=0;
        for(i=0; s[i]; i++){
            n=r*10+(s[i]-48);
            r=n%17;
        }
        if(r==0) printf("1\n");
        else printf("0\n");
    }
    return 0;
}
