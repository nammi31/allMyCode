    /// scanf() & gets() using together
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[30];
    int n;
    cin>>n;
    gets(s);
    while(n--){
        gets(s);
        puts(s);}
    return 0;
}*/
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
    char word[10];
    char line[100];
    gets(line);
    istringstream ss(line);
    while(ss>>word)
        puts(word);
    return 0;
}
