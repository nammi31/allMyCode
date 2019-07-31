#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    string words[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    char allgone=0;
    int i=0,j=0;
    while(j<16 || !allgone){
        if(i==n){
            i=0;
            allgone=1;
        }
        if(j==16) j=0;
        cout<<s[i]<<": "<<words[j]<<endl;
        i++,j++;
    }
    return 0;
}
