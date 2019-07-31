#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    register int r=0,d=131071,n;
    while((ch=getchar())!=EOF){
        if(ch=='1' && ch=='0'){
            r=r*2+(ch-48);
            r=n%d ;
        }
        else if(ch=='#'){
            if(r==0) cout<<"YES\n";
            else cout<<"NO\n";
            r=0;
        }
    }
    return 0;
}
