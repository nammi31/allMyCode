
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,n1,n2;
    string s1,s2;
    cin>>t;
    while(t--){
       cin>>s1>>s2;
       string revsum="";
       int l1=s1.length(),l2=s2.length(), mx=max(l1,l2);
       int i,crry=0;
       for( i=0;i<mx;i++){
          n1=(i<l1)? s1[i]-'0': 0;
          n2=(i<l2)? s2[i]-'0': 0;
            sum=n1+n2+crry;
              revsum+=sum%10+'0';
              crry=sum/10;
        }
        if(crry==1)  revsum+='1';
        int j,k=0,len=revsum.length();
        while(revsum[k]=='0') k++;
        for(j=k;j<len;j++)
           cout<<revsum[j];
        cout<<endl;
    }

    return 0;
}
