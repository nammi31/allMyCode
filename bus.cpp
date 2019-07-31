#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j;
    string s[1002];
    while(cin>>n){
        char found=0;
        for(j=0;j<n;j++){
          cin>>s[j];
          if(!found){
            for(i=0;i<5;i++){
              if(s[j][i]=='O' && s[j][i+1]=='O'){
                found=1;
                s[j][i]='+';
                s[j][i+1]='+';
                break;
            }
           }
          }
        }
        if(found){
              cout<<"YES\n";
            for(j=0;j<n;j++)
              cout<<s[j]<<endl;
        }
        else cout<<"NO\n";
    }
    return 0;
}
