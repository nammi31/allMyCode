#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,s,bch[10000],sp[10000],i,j=1,left;
    while(cin>>b>>s && (b|s)){
        for(i=0;i<b;i++)
            cin>>bch[i];
        for(i=0;i<s;i++)
            cin>>sp[i];
        printf("Case %d: ",j++);
        sort(bch,bch+b);
        int left,mn=100;
        if(b-s<=0)  left=0;
        else{
            left=b-s;
            for(i=b-s-1;i>=0;i--)
                if(bch[i]<mn) mn=bch[i];
        }
        cout<<left;
        if(left) cout<<" "<<mn;
        cout<<endl;
    }
    return 0;
}
