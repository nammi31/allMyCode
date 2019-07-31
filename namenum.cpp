/*
ID: sustnam1
LANG: C++
TASK: namenum
*/
#include<bits/stdc++.h>
using namespace std;
ofstream out("namenum.out");
ifstream in ("namenum.in");
ifstream dict("dict.txt");
string name_no(string s)
{
    string s1="";
    for(int i=0; i<s.length(); i++){
        int n=2+((int)s[i]-65)/3;
        if(s[i]=='S'|| s[i]=='V'|| s[i]=='Y') n--;
        s1+=( n+'0');
    }
    return s1;
}
int main()
{
    string serial,name;
    in>>serial;
    char found=0;
    while(dict>>name){
        if(name.length()==serial.length()){
            string id=name_no(name);
            if(id==serial){
                out<<name<<endl;
                found=1;
            }
        }
    }
    if(!found) out<<"NONE\n";
    return 0;
}
