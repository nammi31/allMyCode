#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[103];
    while(cin>>s){
        int len=s.length();
        a[0]=(s[len-1])-48;
        int b=1,i;
        for(i=1; i<len-1;i++){
            if(s[i-1]!='+' && s[i]=='+'){
               a[b]=(s[i-1]-48);
               b++;
            }
        }
        sort(a,a+b);
        for(i=0;i<b-1;i++){
            printf("%d+",a[i]);
    }
        cout<<a[b-1]<<endl;
    }
    return 0;
}
