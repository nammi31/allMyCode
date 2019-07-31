#include<bits/stdc++.h>
#define pf          printf
#define pfn          printf("\n")
using namespace std;
int main()
{
    string s;
    int cnt=0;
    while(getline(cin,s)){
        for(int i=0; s[i]; i++){
            if(s[i]=='"'){
                cnt++;
                if(cnt%2==1) pf("``");
                else pf("''");
            }
            else pf("%c",s[i]);
        }
        pfn;
    }
    return 0;
}
/*
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!" */
