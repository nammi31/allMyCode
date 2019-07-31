#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],b[6],i;
    while(cin>>a[0]){
       for(i=1;i<5;i++)
            cin>>a[i];

       for(i=0;i<5;i++)
            cin>>b[i];
       for(i=0;i<5;i++)
           if(a[i]==b[i]) break;

       if(i==5) cout<<"Y\n";
       else  cout<<"N\n";
    }
    return 0;
}
