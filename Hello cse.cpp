/*
Write a program that takes a string as input, circularly shifts the vowels, one position to the right,
and prints the shifted string.
Sample input: Hello CSE 2014
Sample output: HElle CSo 2014
*/
#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch)
{
    ch=tolower(ch);
    return (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
}
int main()
{
    string s,v="";
    getline(cin,s);
    for(int i=0; s[i]; i++){
      if(isvowel(s[i])) v+=s[i];
    }
    int m=0;
    for(int i=0; s[i];i++){
       if(isvowel(s[i])){
         if(m==0) s[i]=v[v.size()-1];
         else  s[i]=v[m-1];
         m++;
       }
    }
    cout<<s<<endl;
    return 0;
}
