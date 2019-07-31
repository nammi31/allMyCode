#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,r,i,mor[102],eve[102];
    while(cin>>n>>d>>r &&(n|d|r)){
        for(i=0;i<n;i++)
            cin>>mor[i];

        for(i=0;i<n;i++)
            cin>>eve[i];
        sort(mor,mor+n);
        sort(eve,eve+n);
        int pay=0,sm;
        for(i=0;i<n;i++){
            sm=mor[i]+eve[n-i-1];
            if(sm>d)
              pay+=(sm-d)*r;
        }
        cout<<pay<<endl;

    }
    return 0;
}
