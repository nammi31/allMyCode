#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin, s);
        int len=s.size();
        stack<char>st;
        for(int i=0;i<len;i++)
        {
            if(!st.empty() && s[i]==')' && st.top()=='(')
                st.pop();
            else if(!st.empty() && s[i]==']' && st.top()=='[')
                st.pop();
            else st.push(s[i]);
        }
        if(st.empty())
            cout<<"Yes\n";
        else cout<<"No\n";
    }
}
