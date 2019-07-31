#include<bits/stdc++.h>
using namespace std;
string rev(string s)  //12345
{
    int i;
    string r="";
    for(i=s.length()-1;i>=0;i--)
        r+=s[i];
    return r;  //54321
}
string add(string s1,string s2)
{
    string tp;
    int ln1=s1.length(),ln2=s2.length();
    if(ln1<ln2)  // 667 67789
    {
        tp=s1;
        s1=s2;
        s2=tp;   //67789 667
    }
    int i,j,sm,crry=0;
    string s="";
    for(i=0 ;i<s1.length(); i++){
        if(i<s2.length()) sm=(s1[i]-48) +(s2[i]-48)+crry;
        else sm=(s1[i]-48)+crry;
           s+=(sm%10)+48;
           crry=sm/10;
           if(i==ln1-1 && crry==1) s+='1';
    }
    return s;
}
int main()
{
    string x,y,tp;
    while(cin>>x>>y){
        int ln1=x.length(),ln2=y.length();   //2345 25
        if(ln1<ln2){
           tp=x;
           x=y;
           y=tp;
        }
        string s[100]="";
        int i,j,k,n=0;
        for(i=y.length()-1; i>=0; i--){
            for(k=0; k<n; k++) s[n]+='0';
            int crry=0,mul;
            for(j=x.length()-1; j>=0; j--){
                mul=(y[i]-48)*(x[j]-48)+crry;
                s[n]+=(mul%10)+48;
                crry=mul/10;
                if(j==0 && crry!=0)  s[n]+=crry+48;
            }
            n++;
        }
        string ans,sm="0";
        for(i=0; i<n; i++)
           sm=add(sm,s[i]);
        ans=rev(sm);
        cout<<ans<<endl;
    }
    return 0;
}
