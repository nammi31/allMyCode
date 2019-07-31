#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int ln=s.length(),k=0,j=1,i,nm=0;
        for(i=ln-1;i>=0;i--){
            if(s[i]=='!') k++;
            else if(s[i]>='0' && s[i]<='9'){
                nm+=(s[i]-48)*j;
                j*=10;
            }
        }
        int r=nm%k;
        long long fact=nm;
        if(r==0){
            while(nm!=k){
                nm=nm-k;
                fact=fact*nm;
            }
        }
        else{
            while(nm!=r){
               nm=nm-k;
                fact=fact*nm;
            }
        }
        cout<<fact<<endl;
    }
    return 0;
}
