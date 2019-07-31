#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pcase(x)    printf("Case %d:\n",x)
using namespace std;
int main()
{
  int t,k=1;
  sf1(t);
  while(t--){
    stack<string>b;
    stack<string>f;
    pcase(k++);
    string s,url="http://www.lightoj.com/";
    while(cin>>s){
        if(s=="QUIT") break;
        if(s=="VISIT"){
            b.push(url);
            cin>>url;
            cout<<url<<endl;
            while(!f.empty()) f.pop();
        }
        else if(s == "BACK"){
            if(!b.empty()){
                f.push(url);
                url=b.top(); b.pop();
                cout<<url<<endl;
            }
            else cout<<"Ignored"<<endl;
        }
        else{
            if(!f.empty()){
                b.push(url);
                url=f.top(); f.pop();
                cout<<url<<endl;
            }
            else cout<<"Ignored"<<endl;
        }
    }
  }
    return 0;
}
