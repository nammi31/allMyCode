#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    while(cin>>n){
        int v=0;
        while(n--){
           cin>>s;
           if(s=="X++" || s=="++X")
            v++;
           else v--;
        }
        cout<<v<<endl;
    }
    return 0;
}
