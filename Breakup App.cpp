#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf          printf
using namespace std;
int main()
{
    int n;    int cnt[32]={0},nm;
    sf1(n);
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        for(int i=0;  s[i] ;i++){
            nm=0;
            if(isdigit(s[i])){
               while(isdigit(s[i])) { nm=nm*10+(s[i]-48); i++;  }
            }
            if(s[0]=='G') cnt[nm]+=2;
            else   cnt[nm]++;
        }
    }
    int c=0;  char contest=0;
    for(int day=1;day<=31;day++){
             if(!cnt[day])  c++;
             if(cnt[day]> cnt[19] && cnt[day]>cnt[20]) contest=1;
    }
    if(contest || c==31) pf("No Date\n");
    else pf("Date\n");
    return 0;
}
