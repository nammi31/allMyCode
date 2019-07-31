#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int cnt[52]={0};
        for(int i=0; s[i]; i++){
                char ch=s[i];
            if(isupper(ch))  cnt[ch-65]++;
            if(islower(ch))  cnt[ch-71]++;
        }
        int mx=0;
        for(int i=0;i<52;i++)
            if(cnt[i]>mx)  mx=cnt[i];
        for(int i=0;i<52;i++){
            if(cnt[i]==mx){
                if(i<26)    printf("%c",i+65) ;  //uppercase
                else        printf("%c",i+71);
            }
        }
        printf(" %d\n",mx);
    }
    return 0;
}
