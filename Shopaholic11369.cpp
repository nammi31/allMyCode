#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[20001];
    cin>>t;
    while(t--){
        cin>>n;
        int i,j,start;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(j=0;j<3;j++)
            if(n%3==j) start=j;

        int cnt=0,discnt=0;
        for(i=start;i<n;i++){
            cnt++;
            if(cnt==3){
                discnt+=a[i-2];
                cnt=0;
            }
        }
        cout<<discnt<<endl;
    }
    return 0;
}
