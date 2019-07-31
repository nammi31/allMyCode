#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int ln=s.length();
        if(s=="4" || s=="78" || s=="1")
            printf("+\n");
        else if(s[ln-2]=='3' && s[ln-1]=='5')
            printf("-\n");
        else if(s[0]=='9' && s[ln-1]=='4')
            printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            printf("?\n");
    }
    return 0;
}

