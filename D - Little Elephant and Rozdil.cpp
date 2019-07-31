#include<bits/stdc++.h>
using namespace std;
int a[100003];
int main()
{
    int n,i;
    while(cin>>n){
        int mn=1000000009;
        for(i=0;i<n;i++){
            cin>>a[i];
           if(a[i]<mn) mn=a[i];
        }
        int cnt=0,p;
        for(i=0;i<n;i++){
            if(a[i]==mn){
              cnt++;
              p=i+1;
            }
        }
        if(cnt>1) printf("Still Rozdil\n");
        else printf("%d\n",p);
    }
    return 0;
}
