#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,j=1,i;
    cin>>t;
    while(t--){
        vector<std::pair<int, int> > A;
        cin>>n;
        for(i=0;i<n;i++){
           cin>>k>>p;
           A.push_back(make_pair(p,k));
        }
        long long m=0,mx=0;
        sort(A.begin(),A.end());
        for(i=n-1;i>=0 ;i--){
            m+=A[i].second;
            mx=max( mx,m*A[i].first);
        }
        cout<<"Case "<<j++<<": "<<mx<<endl;
    }
    return 0;
}
