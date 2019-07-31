/*
ID:nazninh1
PROG:beads
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("beads.in","r",stdin);
    freopen("beads.out","w",stdout);
    int n,match=0,mx=0;
    char p;
    cin >> n;
    string s;
    cin>>s;
    s=s+s;
    for(int i=0;i<n;i++)
    {
        match=0;
        p=s[i];
        if(p!='w') match++;
        int j=i,c=0;
        while(j<n+i && s[j])
        {
            if(s[j]!=p &&s[j]!='w'){
                p=s[j];
                match++;
                }
            if(match==3) break;
            j++,c++;
        }
        if(c>mx) mx=c;
    }
    cout << mx << endl;
}
