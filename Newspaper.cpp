#include<bits/stdc++.h>
#define   sf1(x)    scanf("%d",&x)
using namespace std;
int main()
{
    map<char,int>mp;
    int t;
    sf1(t);
    while(t--)
    {
        mp.clear();
        int k,m,val,sm=0;
        char ch;
        sf1(k);
        while(k--){ cin>>ch>>val; mp[ch]=val; }
        string s;
        sf1(m);
        getchar();
        while(m--){
          getline(cin,s);
          for(int i=0; s[i]; i++){
                char c=s[i];
                if(mp[c]) sm+=mp[c];
           }
        }
        printf("%.2lf$\n",sm/100.0);

    }
    return 0;
}
