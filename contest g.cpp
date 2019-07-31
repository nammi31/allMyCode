#include<bits/stdc++.h>
using namespace std;
int timecnt(int n,int k,int cnt)
{
    if(n!=k){
        while(2*n<k){
            n=2*n;
            cnt++;
            if(n==k) break;
        }
        if(2*n>k){
            n--;
            cnt++;
        }

    }
}
int main()
{
    int n,k,ans;
    while(cin>>n>>k){
          int cnt=0;
          ans=timecnt(n,k,cnt);
        }

    return 0;
}
