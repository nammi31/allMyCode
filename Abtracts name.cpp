#include<bits/stdc++.h>
using namespace std;
int isvowel(char ch)
{
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 1;
    return 0;
}
int main()
{
    char a[30],b[30];
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ln1=strlen(a),ln2=strlen(b);
        char same=1;
        if(ln1!=ln2)
            same=0;
        else{
            int i;
            for(i=0;i<ln1;i++){
                if(a[i]!=b[i]){
                    if(!(isvowel(a[i]) && isvowel(b[i])) )
                        same=0;
                }
            }
        }
        printf("%s\n",(same)?"Yes":"No");
    }
   return 0;
}
