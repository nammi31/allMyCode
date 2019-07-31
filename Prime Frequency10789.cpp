#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int d;
    for(d=2; d*d<=n; d++)
        if(n%d==0) break;

    if(d*d>n && n>1) return 1;
    return 0;
}
int main()
{
    string s;
    int t,j=1,frq,i;
    cin>>t;
    while(t--){
        cin>>s;
        int cnt[75]={0};
        for(i=0; s[i]; i++)
            cnt[s[i]-48]++;

        cout<<"Case "<<j++<<": ";
        char found=0;
        for(i=0 ;i<75; i++){
            frq=cnt[i];
            if(frq){
                if(isprime(frq)){
                    printf("%c",i+48);
                    found=1;
                }
            }
        }
        if(found)  cout<<endl;
        else cout<<"empty\n";
    }
    return 0;
}
