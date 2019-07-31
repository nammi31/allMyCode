#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,ans,i,j=1;
    while(cin>>n>>r && (n|r)){
            cout<<"Case "<<j++<<": ";
           for(i=0; i<=26; i++){
              if(n<=r+r*i){
                ans=i;
                break;
            }
          }
        if(i>26)  cout<<"impossible\n";
        else   cout<<ans<<endl;
    }
    return 0;
}
