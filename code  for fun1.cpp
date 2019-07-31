#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string s[102];
    int t,n,i,j=1;
    cin>>t;
    while(t--){
        cin>>n;
        int amount;
        long long sm=0;
        printf("Case %d:\n",j++);
        for(i=0;i<n;i++){
            cin>>s[i];
            if(s[i]=="donate"){
                cin>>amount;
                sm+=amount;
            }
            else if(s[i]=="report")
                cout<<sm<<endl;
        }
    }
    return 0;
}
