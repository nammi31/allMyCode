#include<bits/stdc++.h>
#define pf    printf
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    while(t--){
       getline(cin,s);
       stack<char>st;
       for(int i=0; s[i]; i++){
          if(!st.empty() && st.top()=='(' && s[i]==')')  st.pop();
          else if(!st.empty() && st.top()=='[' && s[i]==']')  st.pop();
          else st.push(s[i]);
      }
      if(st.empty()) pf("Yes\n");
      else pf("No\n");
    }
    return 0;
}
