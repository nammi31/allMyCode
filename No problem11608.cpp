#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,now[15],store[15],need[15],i,j=1;
    while(cin>>n){
        if(n<0)
            break;
        now[0]=n;
        for(i=1;i<=12;i++)
            cin>>now[i];
        for(i=0;i<12;i++)
            cin>>need[i];
        cout<<"Case "<<j++<<":\n";
        store[0]=0;
        for(i=0;i<12;i++)
        {
            now[i]=now[i]+store[i];
            if(now[i]>=need[i]){
                store[i+1]=now[i]-need[i];
                cout<<"No problem! :D\n";
            }
            else{
                store[i+1]=now[i];
                cout<<"No problem. :(\n";
            }
        }
    }
    return 0;
}
