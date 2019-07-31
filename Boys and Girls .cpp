#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
        if(m>=n){    //meye beshi
            string s(n+m,'G');
            for(int i=1;i<n*2;i+=2) s[i]='B';
            cout<<s<<endl;
        }
        else{    //chele beshi
            string s(n+m,'B');
            for(int i=1;i<m*2;i+=2) s[i]='G';
            cout<<s<<endl;
        }
    return 0;
}
