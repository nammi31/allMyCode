#include<bits/stdc++.h>|
using namespace std;
int main()
{
    int t,a[60],i,j,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        int cnt=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[j]<a[i])
                    cnt++;
            }
        }
      printf("Optimal train swapping takes %d swaps.\n",cnt);
    }
    return 0;
}
