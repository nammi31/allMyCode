aaa#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    while(t--){
        getline(cin,s);
        int len=s.length(),root;
        root=sqrt(len);
        if(root*root==len){
            for(int a=0;a<root;a++){
                for(int i=a;i<=(len-root+a);i+=root)
                    cout<<s[i];
            }
            cout<<endl;
        }
        else
            cout<<"INVALID"<<endl;
    }
    return 0;
}
