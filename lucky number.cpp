#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j=1;
    cin>>t;
    while(t--){
        cin>>n;
        printf("Case %d:",j++);
        int x,r,s=sqrt(n);
        for(r=s;r>0;r--){
            x=n-r*r;
            if(x%r==0 && x>0)
                cout<<" "<<x;
        }
       cout<<endl;
    }
    return 0;
}

