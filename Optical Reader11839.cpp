#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[6]="ABCDE";
    int n,a[6];
    while(cin>>n && n){
        while(n--){
            int cnt=0,i,j;
            for(i=0; i<5; i++){
                cin>>a[i];
                if(a[i]<=127){
                    cnt++;
                    j=i;
                }
            }
            if(cnt==1) cout<<s[j]<<endl;
            else cout<<"*\n";
        }
    }
    return 0;
}
