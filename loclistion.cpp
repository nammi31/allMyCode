#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int len=s.length();
        if(len<=10)
           cout<<s<<endl;
        else
           printf("%c%d%c\n",s[0],len-2,s[len-1]);
    }
    return 0;
}
