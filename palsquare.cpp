/*
ID: sustnam1
LANG: C++
TASK: palsquare
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
using namespace std;
int base;
string to_base(int n)
{
    string s="";
    while(n){
        s+=(n%base>=10)?(n%base-10+'A'):(n%base+ '0');
        n/=base;
    }
    reverse(s.begin(),s.end());
    return s;
}
string rev_str(string s1)
{
    reverse(s1.begin(),s1.end());
    return s1;
}
int main()
{
	ifstream fin("palsquare.in");
	ofstream fout("palsquare.out");
    fin>>base;
    for(int i=1; i<=300; i++){
        string n_sq=to_base(i*i);
        string check=rev_str(n_sq);
        if(n_sq==check)
            fout<<(to_base(i))<<" "<<check<<endl;
    }
    return 0;
}

