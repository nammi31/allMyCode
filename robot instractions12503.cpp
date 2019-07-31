#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    int t,n,m;
    string s;
    vector<int>store(n);
    cin>>t;
    while(t--){
        cin>>n;
        int p=0,i;
        for(i=1;i<=n;i++){
            cin>>s;
            if(s=="LEFT")
                p+=store[i]=-1;

            else if(s=="RIGHT")
                p+=store[i]=1;
            else{
                cin>>s;
                cin>>m;
                p+=store[i]=store[m];
            }
         }
        cout<<p<<endl;
    }
    return 0;
}
