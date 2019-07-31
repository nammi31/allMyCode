#include<bits/stdc++.h>
using namespace std;
#define pf printf
int main()
{
    int t,n,i,key[102],pr[102];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>key[i];
        for(i=0;i<n;i++)
            cin>>pr[i];

        for(i=0;i<n;i++)
        {
            if(key[i]==0)
                cout<<" ";
            else if(key[i]==1){
                if(pr[i]==1) cout<<".";
                else if(pr[i]==2) cout<<",";
                else if(pr[i]==3) cout<<"?";
                else pf("%c",'"');
             }

            else if(key[i]==2)
                pf("%c",'a'+pr[i]-1);

            else if(key[i]==3)
                pf("%c",'d'+pr[i]-1);

            else if(key[i]==4)
                pf("%c",'g'+pr[i]-1);

            else if(key[i]==5)
                pf("%c",'j'+pr[i]-1);

            else if(key[i]==6)
                pf("%c",'m'+pr[i]-1);

            else if(key[i]==7)
                pf("%c",'p'+pr[i]-1);

            else if(key[i]==8)
                pf("%c",'t'+pr[i]-1);

            else if(key[i]==9)
                pf("%c",'w'+pr[i]-1);
        }
        cout<<endl;
    }
    return 0;
}
