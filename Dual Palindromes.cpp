/*
ID: sustnam1
LANG: C++
TASK: dualpal
*/
#include<bits/stdc++.h>
#define sf2(x,y)   scanf("%d %d",&x,&y)
using namespace std;
string to_base(int n,int base)
{
    string s="";
    while(n){
        s+=(n%base+'0');
        n/=base;
    }
    return s;
}
string rev_str(string s1)
{
   reverse(s1.begin(),s1.end());
   return s1;
}
int main()
{
    freopen("dualpal.in","r",stdin);
    freopen("dualpal.out","w",stdout);
    int n,k,cnt=0;
    sf2(n,k);
    for(int i=k+1;cnt<n ; i++){
        int dual=0;
        for(int j=2; j<=10; j++){
            string nm=to_base(i,j);
            string check=rev_str(nm);
            if(check==nm)
                dual++;
            if(dual==2){
                cout<<i<<endl;
                cnt++;
                break;
            }
        }
    }

    return 0;
}
