#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,o,wrong;
    while(cin>>p>>h>>o){
        wrong=(o-p);
        if(h>wrong)
            cout<<"Hunters win!\n";
        else
            cout<<"Props win!\n";
    }
    return 0;
}
