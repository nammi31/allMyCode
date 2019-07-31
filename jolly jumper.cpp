#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag[3005],a[3005],dif;
    while(cin>>n){
        for(i=1;i<=n-1;i++)
            flag[i]=0;
        cin>>a[0];
        for(i=1;i<n;i++){
            cin>>a[i];
            dif=abs(a[i]-a[i-1]);
            flag[dif]=1;
        }
        for(i=1;i<n;i++){
            if(flag[i]==0)
                break;
        }
        if(i==n) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}

