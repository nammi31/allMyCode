#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ans[]="OIZEASGTBP";
    int t,i,j,k=1;
    cin>>t;
    getchar();
    while(k<=t){
        getline(cin,s);
        if(s.length()==0){
            k++;
            if(k<=t) cout<<endl;
            continue;
        }
        for(i=0; s[i]; i++){
            int match=0;
            for(j=0;j<10;j++){
                if((s[i]-48)==j){
                    cout<<ans[j];
                    match=1;
                }
            }
            if(!match)  cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
