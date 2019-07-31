
/*
aaabccddd
baab
aa
aaabbbbccccc
aaabbbbbcccc
*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    for(int i=0; i<ln; ){
        if(s[i]==s[i+1] && i>=0){
            s.erase(i,2);
            i--;
        }
        else i++;
    }
    if(s.size()==0) cout<<"Empty String\n";
    else cout<<s<<endl;
    return 0;
}*/
/*
saveChangesInTheEditor
 5
*/
///CamelCase
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=1;
    for(int i=0; s[i]; i++){
       if(isupper(s[i])) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

