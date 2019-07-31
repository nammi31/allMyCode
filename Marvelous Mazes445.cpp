#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        if(s.length()==0){
            cout<<endl;
            continue;
        }
        int n=0,i,j;
        for(i=0; s[i]; i++){
            if(isdigit(s[i]))
                n+=(s[i]-48);
            else if(s[i]=='b'){
                for(j=0; j<n; j++)
                    cout<<" ";
                n=0;
            }
             else if(s[i]=='!')  cout<<endl;
            else{
                for(j=0;j<n;j++)
                    cout<<s[i];
                    n=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}
