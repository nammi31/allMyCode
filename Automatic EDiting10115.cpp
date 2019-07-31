#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string txt;
    while(cin>>n && n){
        getchar();
        int i;
        string a[12],b[12];
        for(i=0; i<n; i++){
            getline(cin,a[i]);
            getline(cin,b[i]);
        }
        getline(cin,txt);
        int p;
        for(i=0; i<n; i++){
            p=txt.find(a[i]);
            if(p!=-1){
                while(p!=-1){
                    txt.erase(p,a[i].size());
                    txt.insert(p,b[i]);
                    p=txt.find(a[i]);
                }
            }
        }
        cout<<txt<<endl;
    }
    return 0;
}
