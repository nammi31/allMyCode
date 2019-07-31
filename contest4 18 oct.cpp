#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[12],k=1,i,j;
    cin>>t;
    string s[12];
    getchar();
    while(t--){
        int mx=0;
        for(i=0;i<10;i++){
           cin>>s[i]>>a[i];
             if(a[i]>mx)  mx=a[i];
        }
      printf("Case #%d:\n",k++);
      for(i=0;i<10;i++){
          if(a[i]==mx)
          cout<<s[i]<<endl;
      }

    }
    return 0;
}
